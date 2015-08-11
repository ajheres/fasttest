//-----------------------------------------------------------------------------
//! \file       waypointgeo.cpp
//! \brief      Implementation of WaypointGeo class
//! \par
//!             See waypointgeo.h
//! \author     SW Products
//! \copyright  (c) 2011, HITT Traffic B.V.
//!
//! $Id: waypointgeo.cpp 90358 2011-05-17 11:09:36Z smit $
//-----------------------------------------------------------------------------

#include <emit/hrtimesp.h>
#include <rw/tpslist.h>

#include <geo/geoarea.hxx>
#include <geo/GeoLineStraight.hxx>
#include <parser/parser.hxx>
#include <parser/applpars.hxx>
#include <parser/applline.hxx>
#include <parser/polypars.hxx>
#include <parser/linepars.hxx>

#include "reporter.hxx"

#include "appldatawaypointparser.h"
#include "waypointgeo.h"

//-----------------------------------------------------------------------------
//
WaypointGeo::WaypointGeo( GeoReporter         *reportController,
                          const char          *filename )
 :  GeoController( reportController ),
    m_WaypointInterfaceItem()
{
    beginParsing();
    parse( filename );
    endParsing( GeoController::defaultNrMosaicCells );
}

//-----------------------------------------------------------------------------
//
WaypointGeo::~WaypointGeo()
{
}

//-----------------------------------------------------------------------------
//
void WaypointGeo::parse( const char* filename )
{
    // create the parser
    PsrParser *parser = createParser( filename );

    // now parse the file
    readFile(parser);

    // cleanup
    delete parser;
}


//-----------------------------------------------------------------------------
//
PsrParser* WaypointGeo::createParser( const char* filename )
{
    // create the main parser
    PsrParser *parser = new PsrParser(filename);

    // create and register the APPLDATA parser
    ApplDataObjectParser *applDataParser = new ApplDataObjectParser();
    parser->registerObjectParser(applDataParser);

    // create and register the APPLDATA WAYPOINT parser
    ApplDataWaypointParser *adwpp = new ApplDataWaypointParser();
    adwpp->registerInterfaceItem(&m_WaypointInterfaceItem);
    applDataParser->registerObjectParser(adwpp);

    // create and register the APPLDATA LINE parser
    ApplDataLineObjectParser *adlp = new ApplDataLineObjectParser();
    adlp->registerInterfaceItem(&m_LineInterfaceItem);
    applDataParser->registerObjectParser(adlp);

    // create and register the POLYGON parser
    PolygonObjectParser *pp = new PolygonObjectParser(OrthoPosition(0.0, 0.0));
    pp->registerInterfaceItem(&m_AreaInterfaceItem);
    parser->registerObjectParser(pp);

    // create and register the LINE parser
    LineObjectParser *lp = new LineObjectParser(OrthoPosition(0.0, 0.0));
    lp->registerInterfaceItem(&m_LineInterfaceItem);
    parser->registerObjectParser(lp);

    return parser;
}

//-----------------------------------------------------------------------------
//
void WaypointGeo::readFile(PsrParser *parser)
{
    int      priority(1);

    RWCString tokenRead = parser->read();
    while ( !parser->eof() )
    {
        if (tokenRead == "POLYGON")
        {
            // read polygon statement: create new GeoArea
            append( new GeoArea( GeoAreaIdentification(
                                    m_WaypointInterfaceItem.id(),
                                    m_WaypointInterfaceItem.name()),
                                 m_AreaInterfaceItem.numPos(),
                                 m_AreaInterfaceItem.polygon(),
                                 priority ),
                    parser->getInputFileName(),
                    parser->getInputLineNumber() );

            priority++;
        }
        if (tokenRead == "LINE")
        {
            // read line statement: create new Geo Line
            append( new GeoLineStraight( GeoLineIdentification(
                                            m_WaypointInterfaceItem.id(),
                                            m_WaypointInterfaceItem.name() ),
                                         m_LineInterfaceItem.beginPosition(),
                                         m_LineInterfaceItem.endPosition(),
                                         m_LineInterfaceItem.lexRec(),
                                         m_LineInterfaceItem.breRec(),
                                         m_LineInterfaceItem.upPos(),
                                         m_LineInterfaceItem.sendToRefPassings(),
                                         m_LineInterfaceItem.sendFromRefPassings(),
                                         priority, 0 ),
                    parser->getInputFileName(),
                    parser->getInputLineNumber() );
            priority++;
        }
        tokenRead = parser->read();
    }
}

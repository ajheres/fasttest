//-----------------------------------------------------------------------------
//! \file       waypointgeo.h
//! \brief      Definition of class WaypointGeo
//! \par
//!             Read the line and areas from the waypoint passage file
//! \author     SW Products
//! \copyright  (c) 2011, HITT Traffic B.V.
//!
//! $Id: waypointgeo.h 87498 2011-02-16 09:49:12Z heres $
//-----------------------------------------------------------------------------
#ifndef __WAYPOINTGEO_HXX__
#define __WAYPOINTGEO_HXX__

#include <geo/geoctrl.hxx>
#include <itfitems/areaitf.hxx>
#include <itfitems/linitf.hxx>
#include "waypointinterfaceitem.h"

class HandoverArea;
class OrthoPosition;
class PsrParser;

class WaypointGeo : public GeoController
{
public:
    WaypointGeo( GeoReporter         *reportController,
                 const char          *filename );
    virtual ~WaypointGeo();

    // parse the input filename
    virtual void parse (const char* filename);

protected:

    PsrParser* createParser(const char* filename);
    void readFile(PsrParser *parser);

private:
    WaypointInterfaceItem        m_WaypointInterfaceItem;
    ItfAreaInterfaceItem         m_AreaInterfaceItem;
    ItfLineInterfaceItem         m_LineInterfaceItem;
};

#endif


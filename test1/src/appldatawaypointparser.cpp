//-----------------------------------------------------------------------------
//! \file       appldatawaypointparser.cpp
//! \brief      Implementation of ApplDataWaypointParser class
//! \par
//!             See appldatawaypointparser.h
//! \author     SW Products
//! \copyright  (c) 2011, HITT Traffic B.V.
//!
//! $Id: appldatawaypointparser.cpp 87498 2011-02-16 09:49:12Z heres $
//-----------------------------------------------------------------------------

#include <parser/tokenwr.hxx>
#include <parser/tokenrdr.hxx>

#include <cstdlib>

#include "appldatawaypointparser.h"
#include "waypointinterfaceitem.h"

const char* ApplDataWaypointParser::m_ClassName = "ApplDataWaypointParser";
const char* ApplDataWaypointParser::m_TokenName = "WAYPOINT";

//-----------------------------------------------------------------------------
//
ApplDataWaypointParser::ApplDataWaypointParser()
 :  m_WaypointInterfaceItem(0)
{
}

//-----------------------------------------------------------------------------
//
ApplDataWaypointParser::~ApplDataWaypointParser()
{
}

//-----------------------------------------------------------------------------
//
const char* ApplDataWaypointParser::className() const
{
    return m_ClassName;
}

//-----------------------------------------------------------------------------
//
const char* ApplDataWaypointParser::tokenName() const
{
    return m_TokenName;
}

//-----------------------------------------------------------------------------
//
const char* ApplDataWaypointParser::read(PsrTokenReader* inputStream)
{
    RWCString token;
    inputStream->getWord(token);

    if (token == "ID")
    {
        int value;
        inputStream->getInteger(value);
        m_WaypointInterfaceItem->id(value);

        RWCString string;
        inputStream->getString(string);
        m_WaypointInterfaceItem->name(string);

        inputStream->nextLine();
    }
    return m_TokenName;
}

//-----------------------------------------------------------------------------
//
void ApplDataWaypointParser::registerInterfaceItem(WaypointInterfaceItem* waypointInterfaceItem)
{
    m_WaypointInterfaceItem = waypointInterfaceItem;
}

//-----------------------------------------------------------------------------
//
void ApplDataWaypointParser::write(PsrTokenWriter* /*outputStream*/, ItfInterfaceItem* /*item*/)
{
}

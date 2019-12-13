//-----------------------------------------------------------------------------
//! \file       appldatawaypointparser.h
//! \brief      Definition of class WaypointGeo
//! \par
//!             Read the line and areas from the waypoint passage file
//! \author     SW Products
//! \copyright  (c) 2011, HITT Traffic B.V.
//!
//! $Id: appldatawaypointparser.h 87498 2011-02-16 09:49:12Z heres $
//-----------------------------------------------------------------------------
#ifndef __APPLDATAWAYPOINTPARSER_HXX__
#define __APPLDATAWAYPOINTPARSER_HXX__

#include <parser/objpars.hxx>

class PsrTokenReader;
class PsrTokenWriter;
class ItfInterfaceItem;
class ItfBuoyInterfaceItem;
class WaypointInterfaceItem;

class ApplDataWaypointParser : public PsrObjectParser
{
public:
    ApplDataWaypointParser();
    virtual ~ApplDataWaypointParser();

    virtual QString tokenName() const;
    virtual QString className() const;
    virtual QString read(PsrTokenReader* inputStream);
    virtual void write(PsrTokenWriter* outputStream, ItfInterfaceItem* item);

    void registerInterfaceItem(WaypointInterfaceItem *waypointInterfaceItem);

private:

    static const char*        m_ClassName;
    static const char*        m_TokenName;
    WaypointInterfaceItem*    m_WaypointInterfaceItem;
};

#endif


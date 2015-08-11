//-----------------------------------------------------------------------------
//! \file       waypointinterfaceitem.h
//! \brief      Definition of class WaypointGeo
//! \par
//!             Read the line and areas from the waypoint passage file
//! \author     SW Products
//! \copyright  (c) 2011, HITT Traffic B.V.
//!
//! $Id: waypointinterfaceitem.h 87498 2011-02-16 09:49:12Z heres $
//-----------------------------------------------------------------------------
#ifndef __WAYPOINTINTERFACEITEM_HXX__
#define __WAYPOINTINTERFACEITEM_HXX__

#include <rw/cstring.h>
#include <itfitems/ItfIdentifiedInterfaceItem.hxx>

class OrthoPosition;

class WaypointInterfaceItem: public ItfIdentifiedInterfaceItem
{
public:
    WaypointInterfaceItem();
    WaypointInterfaceItem( const WaypointInterfaceItem& c );
    virtual ~WaypointInterfaceItem();

    virtual const char* className() const;

private:
    static const char* m_ClassName;
};

#endif


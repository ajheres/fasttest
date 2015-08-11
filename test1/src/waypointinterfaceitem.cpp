//-----------------------------------------------------------------------------
//! \file       waypointinterfaceitem.cpp
//! \brief      Implementation of WaypointInterfaceItem class
//! \par
//!             See waypointinterfaceitem.h
//! \author     SW Products
//! \copyright  (c) 2011, HITT Traffic B.V.
//!
//! $Id: waypointinterfaceitem.cpp 87498 2011-02-16 09:49:12Z heres $
//-----------------------------------------------------------------------------

#include "waypointinterfaceitem.h"

const char* WaypointInterfaceItem::m_ClassName = "WaypointInterfaceItem";

//-----------------------------------------------------------------------------
//
WaypointInterfaceItem::WaypointInterfaceItem()
 :  ItfIdentifiedInterfaceItem()
{
}

//-----------------------------------------------------------------------------
//
WaypointInterfaceItem::~WaypointInterfaceItem()
{
}

//-----------------------------------------------------------------------------
//
WaypointInterfaceItem::WaypointInterfaceItem( const WaypointInterfaceItem& c )
 :  ItfIdentifiedInterfaceItem( c )
{
}

//-----------------------------------------------------------------------------
//
const char* WaypointInterfaceItem::className() const
{
    return m_ClassName;
}

//-----------------------------------------------------------------------------
//! \file       testhdlr.hxx
//! \brief      Definition of the class TestHandler
//-----------------------------------------------------------------------------
#ifndef __TESTHDLR_HXX__
#define __TESTHDLR_HXX__

#include "comms/handler.h"

class TestHandler : public BaseHandler
{
public:

    TestHandler( Comms *comms );

    virtual ~TestHandler();

    bool unpack(Msg *msg);

private:
};

#endif //__TESTHDLR_HXX__

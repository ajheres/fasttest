//------------------------------------------------------------------
// File       : reporter.cxx
// Description: Reporter class implementation
// Author     : Sensor Processing team
//
// $Id: reporter.cxx 56129 2004-08-27 08:08:18Z heres $
//
// $Log$
//
// Copyright (c) 2001, Holland Institute of Traffic Technology B.V.
//------------------------------------------------------------------

#include <emit/hrfunc.h>

#include "reporter.hxx"

//---------------------------------------------------------------------------
// Function     : Reporter
// Description  : constructor for Reporter
// Inputs       : none
// Outputs      : none
// Precondition : none
// Modifies     : none
// Postcondition: none
//---------------------------------------------------------------------------
Reporter::Reporter()
{
}

//---------------------------------------------------------------------------
// Function     : ~Reporter
// Description  : destructor for Reporter
// Inputs       : none
// Outputs      : none
// Precondition : none
// Modifies     : none
// Postcondition: none
//---------------------------------------------------------------------------
Reporter::~Reporter()
{
}

// --------------------------------------------------------------------------
void printContext( const RWCString& context1,
                                const RWCString& context2,
                                const RWCString& context3,
                                const RWCString& context4,
                                const RWCString& context5)
{
      if (context1.length() != 0)
      {
          std::cout << " [ " << context1 << " ]";
      }
      if (context2.length() != 0)
      {
          std::cout << " [ " << context2 << " ]";
      }
      if (context3.length() != 0)
      {
          std::cout << " [ " << context3 << " ]";
      }
      if (context4.length() != 0)
      {
          std::cout << " [ " << context4 << " ]";
      }
      if (context5.length() != 0)
      {
          std::cout << " [ " << context5 << " ]";
      }
}

// --------------------------------------------------------------------------

int Reporter::reportError(   const RWCString& mnemonic,
                                const RWCString& context1,
                                const RWCString& context2,
                                const RWCString& context3,
                                const RWCString& context4,
                                const RWCString& context5)
{
    std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Error   " << mnemonic;
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

// --------------------------------------------------------------------------

int Reporter::reportFatal(   const RWCString& mnemonic,
                                const RWCString& context1,
                                const RWCString& context2,
                                const RWCString& context3,
                                const RWCString& context4,
                                const RWCString& context5)
{
    std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Fatal   " << mnemonic;
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

// --------------------------------------------------------------------------

int Reporter::reportInfo(    const RWCString& mnemonic,
                                const RWCString& context1,
                                const RWCString& context2,
                                const RWCString& context3,
                                const RWCString& context4,
                                const RWCString& context5)
{
    std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Info    " << mnemonic;
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

// --------------------------------------------------------------------------

int Reporter::reportWarning( const RWCString& mnemonic,
                                const RWCString& context1,
                                const RWCString& context2,
                                const RWCString& context3,
                                const RWCString& context4,
                                const RWCString& context5)
{
    std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Warning " << mnemonic;
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

// --------------------------------------------------------------------------

int Reporter::reportOpaque(  const RWCString& mnemonic,
                                const RWCString& context1,
                                const RWCString& context2,
                                const RWCString& context3,
                                const RWCString& context4,
                                const RWCString& context5)
{
    std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Opaque  " << mnemonic;
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

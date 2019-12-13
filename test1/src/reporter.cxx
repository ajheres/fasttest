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

//#include <emit/hrfunc.h>

#include <iostream>
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
void printContext( const QString& context1,
                                const QString& context2,
                                const QString& context3,
                                const QString& context4,
                                const QString& context5)
{
      if (context1.length() != 0)
      {
          std::cout << " [ " << context1.toStdString() << " ]";
      }
      if (context2.length() != 0)
      {
          std::cout << " [ " << context2.toStdString() << " ]";
      }
      if (context3.length() != 0)
      {
          std::cout << " [ " << context3.toStdString() << " ]";
      }
      if (context4.length() != 0)
      {
          std::cout << " [ " << context4.toStdString() << " ]";
      }
      if (context5.length() != 0)
      {
          std::cout << " [ " << context5.toStdString() << " ]";
      }
}

// --------------------------------------------------------------------------

int Reporter::reportError(   const QString& mnemonic,
                                const QString& context1,
                                const QString& context2,
                                const QString& context3,
                                const QString& context4,
                                const QString& context5)
{
    //std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Error   " << mnemonic.toStdString();
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

// --------------------------------------------------------------------------

int Reporter::reportFatal(   const QString& mnemonic,
                                const QString& context1,
                                const QString& context2,
                                const QString& context3,
                                const QString& context4,
                                const QString& context5)
{
    //std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Fatal   " << mnemonic.toStdString();
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

// --------------------------------------------------------------------------

int Reporter::reportInfo(    const QString& mnemonic,
                                const QString& context1,
                                const QString& context2,
                                const QString& context3,
                                const QString& context4,
                                const QString& context5)
{
    //std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Info    " << mnemonic.toStdString();
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

// --------------------------------------------------------------------------

int Reporter::reportWarning( const QString& mnemonic,
                                const QString& context1,
                                const QString& context2,
                                const QString& context3,
                                const QString& context4,
                                const QString& context5)
{
    //std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Warning " << mnemonic.toStdString();
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

// --------------------------------------------------------------------------

int Reporter::reportOpaque(  const QString& mnemonic,
                                const QString& context1,
                                const QString& context2,
                                const QString& context3,
                                const QString& context4,
                                const QString& context5)
{
    //std::cout << ::hrGetCurrentUtcTime().format("%d %b %H:%M:%S > ");
    std::cout << "Opaque  " << mnemonic.toStdString();
    printContext( context1, context2, context3, context4, context5 );
    std::cout << std::endl;
    return 0;
}

//------------------------------------------------------------------
// File       : reporter.hxx
// Description: Class TtfpReporter include file
// Author     : Sensor Processing team
//
// $Id: reporter.hxx 56129 2004-08-27 08:08:18Z heres $
//
// $Log$
//
// Copyright (c) 2001, Holland Institute of Traffic Technology B.V.
//------------------------------------------------------------------
#ifndef _REPORTER_HXX
#define _REPORTER_HXX

#include "hc/reporter.hxx"
#include "geo/georeporter.hxx"

// The class Reporter is used to implement the report interface to
// the ACMS library and the GEO library
class Reporter : public HcReporter, public GeoReporter
{
public:

    Reporter();
    virtual ~Reporter();

    virtual int reportError (const RWCString& mnemonic,
                        const RWCString& context1 = "",
                        const RWCString& context2 = "",
                        const RWCString& context3 = "",
                        const RWCString& context4 = "",
                        const RWCString& context5 = "");

    virtual int reportFatal (const RWCString& mnemonic,
                        const RWCString& context1 = "",
                        const RWCString& context2 = "",
                        const RWCString& context3 = "",
                        const RWCString& context4 = "",
                        const RWCString& context5 = "");

    virtual int reportInfo (const RWCString& mnemonic,
                        const RWCString& context1 = "",
                        const RWCString& context2 = "",
                        const RWCString& context3 = "",
                        const RWCString& context4 = "",
                        const RWCString& context5 = "");

    virtual int reportWarning (const RWCString& mnemonic,
                        const RWCString& context1 = "",
                        const RWCString& context2 = "",
                        const RWCString& context3 = "",
                        const RWCString& context4 = "",
                        const RWCString& context5 = "");

    virtual int reportOpaque (const RWCString& mnemonic,
                        const RWCString& context1 = "",
                        const RWCString& context2 = "",
                        const RWCString& context3 = "",
                        const RWCString& context4 = "",
                        const RWCString& context5 = "");
};

#endif /* _REPORTER_HXX */

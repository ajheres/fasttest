//------------------------------------------------------------------
// File       : test.hxx
// Description: Class TtfpReporter include file
// Author     : Sensor Processing team
//
// $Id: reporter.hxx 56129 2004-08-27 08:08:18Z heres $
//
// $Log$
//
// Copyright (c) 2001, Holland Institute of Traffic Technology B.V.
//------------------------------------------------------------------
#ifndef _TEST_HXX
#define _TEST_HXX

//#include <QTcpSocket>

//class BaseComms;
//class QNetworkReply;
//class QXmlStreamReader;

class Test /*: public QObject,
             public QXmlDefaultHandler,
             public QXmlSimpleReader,
             public StmpHandler*/
{
    enum Enum
    {
//! \brief 2x multiplier on the zoom optics
//!
        X2    =    1,
        X14
    };

public:

    //Test( BaseComms& comms, int type = 1, bool output = false );
    Test();
    virtual ~Test();

//    bool startElement(const QString &,
//                      const QString &,
//                      const QString & qName,
//                      const QXmlAttributes & atts);

//    bool parseXMLString(QString data, bool cont);
//    void parse2();

//    void expiration1();
//    void expiration2();

//    bool unpack( StmpMsg* msg );

//public slots:
//    void connected();
//    void disconnected();
//    void finished( QNetworkReply * reply );

private:
//    QXmlStreamReader* m_xml;
//    int               m_type;
//    bool              m_output;
//    QString           m_dataBuffer;
//    int               m_level;
//    SingleShotTimer<Test>* m_timer1;
//    PeriodicTimer<Test>*   m_timer2;
    //QTcpSocket client;
};

#endif /* _TEST_HXX */

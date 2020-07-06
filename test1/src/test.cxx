//------------------------------------------------------------------
// File       : test.cxx
// Description: Class TtfpReporter include file
// Author     : Sensor Processing team
//
// $Id: reporter.hxx 56129 2004-08-27 08:08:18Z heres $
//
// $Log$
//
// Copyright (c) 2001, Holland Institute of Traffic Technology B.V.
//------------------------------------------------------------------
#include <QtCore/QDebug>
#include <QNetworkReply>
#include <QCoreApplication>
#include <QXmlStreamReader>
#include <QRegExp>

#include "test.hxx"

Test::Test(/* BaseComms& comms, int type, bool output */)
//    :   StmpHandler( &comms, "stmpHandler" ),
//        m_xml(0),
//        m_type( type ),
//        m_output( output ),
//        m_level( 0 )
{
    client.connectToHost("localhost", 40512);
//    setContentHandler(this);
//    m_xml = new QXmlStreamReader;

//    m_timer1 = new SingleShotTimer< Test >( this,
//        1.0,
//        &Test::expiration1 );
//    m_timer2 = new PeriodicTimer< Test >( this,
//        1.0,
//        &Test::expiration2 );
//    //m_timer1->start( 1.0 );
//    m_timer2->start( 0.1 );
}

Test::~Test()
{
}

void Test::connected()
{
    qDebug() << "connected";
}

void Test::disconnected()
{
    qDebug() << "disconnected";
}

//void Test::timeout()
//{
//    qDebug() << "timeout";
//}

//void Test::finished( QNetworkReply * reply )
//{
//    qDebug() << "finished";
//    QByteArray data = reply->readAll();
//    qDebug() << data;

//    QCoreApplication::exit(0);
//}

//bool Test::startElement(const QString &,
//                  const QString &,
//                  const QString & qName,
//                  const QXmlAttributes & atts)
//{
//    if ( qName == "PosReport" && m_output )
//        qDebug() << atts.value( "Id" );

//    return true;
//}

//bool Test::parseXMLString(QString data, bool cont)
//{
//    QRegExp rx( "</MSG_([A-Za-z0-9]*)>");
//    int index = 0;

//    if ( m_type == 1 )
//    {
//        // add the data to what was left over from a previous parse run
//        m_dataBuffer.append(data);

//        // search the buffer for the nearest closetag
//        // parse the messages in the buffer one by one
//        while ( (index = rx.indexIn( m_dataBuffer )) != -1 )
//        {
//            int len = index + rx.matchedLength();
//            QString message = m_dataBuffer.left(len);
//            m_dataBuffer.remove(0, len);

//            QXmlInputSource inputForParser;
//            inputForParser.setData( message );
//            parse(&inputForParser, false);
//        }
//        // we finished parsing, check if we should keep possible
//        // partial messages in the buffer
//        if (!cont) {
//            m_dataBuffer = "";
//        }
//    }
//    if ( m_type == 2 )
//    {
//        m_xml->addData( data );
//        parse2();
//        // end found
//        if ( (index = rx.indexIn( data )) != -1 )
//        {
//            int len = index + rx.matchedLength();
//            m_xml->clear();
//            m_xml->addData( data.right( data.length() - len ) );
//        }

//        if (!cont) {
//            m_xml->clear();
//        }
//    }
//    return true;
//}

//void Test::parse2()
//{
//    bool stop(false);

//    while(!m_xml->atEnd() /*&& !m_xml->hasError()*/ && !stop)
//    {
//        QXmlStreamReader::TokenType token = m_xml->readNext();

//        // qDebug() << m_xml->name() << m_xml->lineNumber() << m_xml->columnNumber();
//        switch ( m_level )
//        {
//        case 0: // MSG
//            if(token==QXmlStreamReader::EndElement && m_xml->name()=="MSG_VesselData")
//                stop = true;

//            if(token==QXmlStreamReader::StartElement && m_xml->name()=="MSG_VesselData")
//            {
//                m_level++;
//            }
//            break;

//        case 1: // Body
//            if(token==QXmlStreamReader::EndElement && m_xml->name()=="Body")
//                m_level--;

//            if(token==QXmlStreamReader::StartElement && m_xml->name()=="VesselData")
//            {
//                m_level++;
//            }
//            break;

//        case 2: // VesselData

//            if(token==QXmlStreamReader::EndElement && m_xml->name()=="VesselData")
//            {
//                m_level--;
//            }
//            if(token==QXmlStreamReader::StartElement && m_xml->name()=="PosReport")
//            {
//                if (m_output)
//                    qDebug() << m_xml->attributes().value("Id");
//                m_level++;
//            }
//            break;

//        case 3: // PosReport
//            if(token==QXmlStreamReader::EndElement && m_xml->name()=="PosReport")
//                m_level--;

//        }
//    }

//    if ( m_xml->error() != QXmlStreamReader::NoError &&
//         m_xml->error() != QXmlStreamReader::PrematureEndOfDocumentError )
//    {
//        qDebug() << "error - clear: " << m_xml->error();
//        m_xml->clear();
//    }
//}

//void Test::expiration1()
//{
//    m_type = (m_type+1)%2;
//    qDebug() << "expiration1" << m_type;
//    //m_timer1->start( m_type );           // trigger in 0 or 1 seconds
//}

//void Test::expiration2()
//{
//    m_output = !m_output;
//    qDebug() << "expiration2" << (m_output?" A":" B");
//    usleep( 1e5 + rand()*5e4/RAND_MAX ); // sleep 0.1 to 0.15 second
//}

//bool Test::unpack( StmpMsg* /*msg*/ )
//{
//    m_timer1->start( 0 );
//    usleep( 1e5 + rand()*9e5/RAND_MAX ); // sleep 0.1 to 1.0 second
//    return true;
//}

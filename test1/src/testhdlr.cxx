//-----------------------------------------------------------------------------
//! \file       testhdlr.cxx
//! \brief      Implementation of the class TestHandler
//-----------------------------------------------------------------------------

#include <comms/comms.h>

#include <QUuid>

#include "mtm/envelope.pb.h"
#include "mtm/alert/model/alert_info.pb.h"
#include "mtm/alert/model/alert_descriptor.pb.h"

#include "testhdlr.hxx"

//-----------------------------------------------------------------------------
//
TestHandler::TestHandler( Comms* comms )
: BaseHandler( comms, "test" )
{
}

//-----------------------------------------------------------------------------
//
TestHandler::~TestHandler()
{
}

//-----------------------------------------------------------------------------
//
bool TestHandler::unpack(Msg *msg)
{
    mtm::event::ArgumentDescriptor descr;

    // Check if the protobuf message has envelope
    mtm::Envelope envelope;
    if ( envelope.ParseFromArray(msg->contents(), msg->length()) )
    {
        if ( envelope.has_message() )
        {
            const google::protobuf::Any& message = envelope.message();
            if (message.Is<mtm::alert::model::AlertInfo>())
            {
                mtm::alert::model::AlertInfo alertInfo;
                message.UnpackTo(&alertInfo);

                mtm::event::Argument arg = alertInfo.arguments(0);
                const google::protobuf::Any& content = arg.content();
                if ( content.type_url() == descr.type_url().value() )
                {
                    if ( content.Is<google::protobuf::StringValue>() )
                    {
                        google::protobuf::StringValue str;
                        content.UnpackTo(&str);
                    }
                    else if ( content.Is<mtm::Uuid>() )
                    {
                        mtm::Uuid trackUuid;
                        content.UnpackTo(&trackUuid);
                        QByteArray bytes( QByteArray::fromStdString(trackUuid.value()) );
                        QByteArray trackIdBytes = bytes.mid(6,2); //w2
                        unsigned short trackId = trackIdBytes.toUShort();

                        // of
                        QUuid trackQUuid( QUuid::fromRfc4122(QByteArray::fromStdString(trackUuid.value())) );
                    }
                }

                std::cout << alertInfo.DebugString();
            }
            else if (message.Is<mtm::alert::model::AlertDescriptor>())
            {
                mtm::alert::model::AlertDescriptor alertDscr;
                message.UnpackTo(&alertDscr);

                std::cout << alertDscr.DebugString();
            }
        }
    }

    return true;
}


#ifdef WIN32
#pragma warning(disable: 4786)
#pragma warning(disable: 4291)
#endif

#include <iostream>

#include <QCoreApplication>
#include <QtCore/QDebug>

#include "geoclient.h"

#ifdef DITHEBBENWETOCHNIETNODIG
#include <atcgeo/atcgeo.hxx>

#include <geo/geoarea.hxx>
#include <geo/geoarid.hxx>
#include <geo/geoarinp.hxx>
#include <geo/geoarsit.hxx>
#include <geo/geoarsta.hxx>


#include "reporter.hxx"
#include "test.hxx"

#include <tell/tell.h>
#include <event/devctrl.h>
#include <comms/comms.h>
#include "testhdlr.hxx"
#include <inifile/inifile.h>


#ifdef WIN32
#include <io.h>
#else
#include <unistd.h>
#endif

#include <event/devctrl.h>
#include <inifile/inifile.h>
#include <emit/hrpertmr.h>

#include <iostream>
#include <sstream>
#include <fstream>

#include <cctype>
#include <cstring>
#include <list>
#include <QString>

#include <rw/cstring.h>

#include <tfp_i/plan.h>
#include <tfp_i/depotplansmodmsg.h>

#include "waypointgeo.h"

#include <cmath>
#include <hitt/hitt.hxx>

#include <position/position.hxx>
#include <geotrans/geotrctrl.hxx>

#include <comms/nbostms.h>

#include <emit/hrtimesp.h>
#include <emit/hrtimeb.h>


#ifndef CI_CVS_TAG
#define CI_CVS_TAG  "unknown release"
#endif

#include <rw/tvhdict.h>

static double TWOPI ( 6.283185307179586476925286766559 );
static double PI ( 3.1415926535897932384626433832795 );
static double PIDIV2 ( 1.5707963267948966192313216916398 );

#include <string>

#ifdef UNIX
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#else
#include <direct.h>
#include <errno.h>
#include <io.h>
#include <windows.h>
#endif

#include <geo/geoarea.hxx>
#include <geo/geoarsit.hxx>
#include <geo/geoarsta.hxx>
#include <geo/geoarid.hxx>
#include <geo/geoarinp.hxx>
#include <geo/geoctrl.hxx>

#include <common_i/endofsector.h>
#include <common_i/endofsectormsg.h>

static double PI    ( 3.141592653589793238462643383280 );
static double PIDIV2( 1.570796326794896619231321691640 );

void TestTimeConv()
{
    HRTime now(2000, July, 25, 23, 59, 56);
    long seconds          = now.getTotalSeconds ();
    long secSinceMidnight = seconds % 86400;
    long plotTimeToSend   = 0;      // millisec.
    RWBoolean plotValid   = FALSE;  // true if plot within time window
    double periodSecPlot(-1.0); // in sec.
    long secInPeriod(-1);

    long testValues[5] = {300, 380, 0, 5, 35};

    for (int i=0; i<5; i++)
    {
        // one day = 168 dayperiods of 512 seconds + 384 seconds
        long daySeconds          = seconds - secSinceMidnight;
        long dayPeriod        = secSinceMidnight / 512;
        secInPeriod           = secSinceMidnight % 512;
        periodSecPlot         = testValues[i]; // in sec.
        long milliSecPlot     = long((periodSecPlot * 1000.0) + 0.5); // in msec
        long plotPeriodSec    = long(periodSecPlot + 0.5);

        // determine dayperiod crossing with 1/4 of day period
        if (secInPeriod < periodSecPlot - 128)
        {
            if (dayPeriod == 0)      // first period after midnight
            {
                dayPeriod = 168;
                daySeconds -= 86400; // midnight of the previous day
            }
            else
            {
                dayPeriod--;
            }
        }
        else if (secInPeriod > periodSecPlot + 128)
        {
            if (dayPeriod == 168)    // last period before midnight
            {
                dayPeriod = 0;
                daySeconds += 86400; // midnight of next day
            }
            else
            {
                dayPeriod++;
            }
        }
        // else no crossings

        plotTimeToSend = (dayPeriod * 512000) + milliSecPlot;
        HRTime timeStamp(daySeconds*1E6 + plotTimeToSend*1E3);

        plotValid = ((now + HRTimeSpan(10,0) > timeStamp) &&
                     (now - HRTimeSpan(60,0) < timeStamp)   );

        if (plotValid) // means: plot within the time window
        {
            long sec = plotTimeToSend / 1000;
            long min = sec / 60;
            long hour = min / 60;
            long usec = (plotTimeToSend - sec*1000)*1000;
            sec -= min  * 60;
            min -= hour * 60;

            std::cout << periodSecPlot << " : "
                 << timeStamp.format() << std::endl;
        }
        else
        {
            std::cout << periodSecPlot << " : Invalid time" << std::endl;
        }
    }

    // try this time
    double myseconds(968505911.200);
    HRTime mytime(myseconds*1E6);
    std::cout << "\n\nTime: " << myseconds << " = " << mytime.format() << std::endl;
};

void TestSizeOf()
{
    double xpos = 0.0;
    double* ptr = 0;

    std::cout << "double : " << sizeof(xpos) << std::endl;
    std::cout << "pointer: " << sizeof(ptr)  << std::endl;
};


double angleDiff ( const double from, const double to )
{
    double delta = to - from;

    if (delta <-PI) delta += TWOPI;
    if (delta > PI) delta -= TWOPI;

    return delta;
}

double heading(double xVelocity, double yVelocity)
{
    double speed( (xVelocity * xVelocity)  + (yVelocity * yVelocity) );

    if ( speed < 1.00E-6 ) // speed < mm/s
    {
        return 0.0;
    }

    else
    {
        double angle( atan2(xVelocity, yVelocity) );

        if ( angle < 0.0 )
        {
            angle += TWOPI;
        }

        return angle;
    }
}

void TestFileNames()
{
    QString       pathName;
#ifdef UNIX
    pathName = "/HITT/tracking/users/Arjen/temp";
#else
    pathName = "E:\\users\\arjen\\temp";
#endif


m_period->start( SP_SprayPeriod->get() );
#ifdef UNIX
    QString       name;
    QString       extension;
    size_t          length;
    struct dirent  *dirEntry;
    DIR            *directory;

    length    = 3;//parameters().fileExtension().length();
    directory = opendir( pathName );
    if( directory != rwnil )
    {
        pathName.append( "/", 1 );
        dirEntry = readdir( directory );
        while( dirEntry != rwnil )
        {
            if( dirEntry->d_reclen > length )
            {
                name      = dirEntry->d_name;
                extension = name( name.length() - length, length );
                if( extension == "xls" )
                {
                    //fileNames.insert( pathName + name );
                    std::cout << pathName + name << std::endl;
                }
            }

            dirEntry = readdir( directory );
        }

        closedir( directory );
    }
#else
    QString           search;
    struct _finddata_t  file;
    long                handle;

    pathName.append( "\\", 1 );
    search = pathName + "*." + "xls";
    handle = _findfirst( search, &file );
    if( handle != -1 )
    {
        do
        {
            //fileNames.insert( pathName + file.name );
            std::cout << pathName + file.name << std::endl;
        } while( _findnext( handle, &file ) == 0 );

        _findclose( handle );
    }
#endif
};

void calculatePredictedPosition( const HRTime& updateTime,
                            const HRTime& calculationTime,
                            const double& acceleration,
                            double& xPosition,
                            double& yPosition,
                            double& xVelocity,
                            double& yVelocity )
{
    //divide the total number of microseconds by a million to obtain the number of seconds
    double timedifference( ( calculationTime.getTotalUseconds() -
                             updateTime.getTotalUseconds() ) * 1.0e-6 );

    //double tRate( turnRate() );
    double tRate( 0 );
    //double vx( GeneralTrack::xVelocity() );
    double vx( 6 );
    //double vy( GeneralTrack::yVelocity() );
    double vy( 8 );
    //double x( GeneralTrack::xPosition() );
    double x( 20 );
    //double y( GeneralTrack::yPosition() );
    double y( 20 );

    //if( fabs(tRate) > SP_MinTurnRateForPrediction->get() )
    if( fabs(tRate) > 0.01 )
    {
        // extrapolation taking into account turnRate
        double turningAngle( tRate * timedifference );
        double sinta( sin( turningAngle ) );
        double costa( cos( turningAngle ) );

        xVelocity = vx * costa + vy * sinta;
        yVelocity = vy * costa - vx * sinta;

        xPosition = x - (yVelocity - vy ) / tRate;
        yPosition = y + (xVelocity - vx ) / tRate;
    }
    else
    {
        // lineair extrapolation taking into account acceleration
        // double speed( GeneralTrack::speed() );
        double speed( 10 );

        if ( speed < 1.0e-3 )
        {
            if (acceleration > 0.0)
            {
                xVelocity = 0.0;
                yVelocity = speed + acceleration * timedifference;

                xPosition = x;
                yPosition = y + acceleration * timedifference * timedifference / 2;
            }
            else
            {
                xVelocity = 0.0;
                yVelocity = 0.0;

                xPosition = x;
                yPosition = y;
            }
        }
        else
        {
            double accN = acceleration / speed;

            if ( (acceleration < 0.0) &&
                 (speed + acceleration * timedifference < 0.0) )
            {
                xVelocity = 0.0;
                yVelocity = 0.0;

                xPosition = x - vx / accN / 2;
                yPosition = y - vy / accN / 2;
            }
            else
            {
                xVelocity = vx * (1.0 + accN * timedifference);
                yVelocity = vy * (1.0 + accN * timedifference);

                xPosition = x + vx * timedifference * (1.0 + accN * timedifference / 2 );
                yPosition = y + vy * timedifference * (1.0 + accN * timedifference / 2 );
            }
        }
    }
}

double alphaFilter( const double& presentValue, const double& newValue,
                 const double& filterDelta, const double& filterAlpha )
{
    // No filtering if difference is smaller than systemparameter
    if (fabs(presentValue - newValue) < filterDelta )
    {
        // No filtering for new value
        return newValue;
    }
    else
    {
        // calculate new value using alpha filter
        return ( presentValue - filterAlpha * (presentValue - newValue) );
    }
}

void TestScriptCommand()
{
    const char* cmd = "testscript.bat";
    int result = 0;

    // Do not quit application when command is finished
    // ctrl->ignoreChildSignal(TRUE);

#ifdef WIN32
    if ( cmd )
    {
        // Make command blocking depending on "&" characters
        char     command[512], *p;
        unsigned length = strlen(cmd);
        bool     blocking;

        strcpy( command, cmd );
        p = length ? command + length - 1 : command;

        while( isspace(*p)   && ( p > command ) ) p--;
        blocking = ( *p != '&' );
        while( ( *p == '&' ) && ( p > command ) ) p--;
        *(p+1) = 0;

        std::cout << "blocking" << std::endl;

        result = (blocking ? !system(command) : ( WinExec(command,SW_HIDE) > 31 ));
    }
#else
    result =  (cmd && !system(cmd));
#endif

    std::cout << result << std::endl;
}

struct TopItem
{
    float x1;
    float y1;
    float x2;
    float y2;
    char  t;
    char  j;
};

void TestRound()
{
    GeoController geo( OrthoPosition(-20534, 0),
        12, 0, 0, 7, 4466 );

    double positionX            = 10727.999999999998;

    geo.check( OrthoPosition( positionX, 1.0 ) );
}

void ConvertTime()
{
    QString format( "%a %b %d %H:%M:%S.%u %Y" );
    //QString format( "%H:%M:%S" );
    char input[80];
    double seconds = hrTimeBaseUtc.getCurrentTime().getTotalUseconds()*1E-6;

    do
    {
        HRTime time(seconds*1E6);
        std::cout << time.format(format);
        std::cout << "\n" << "Enter time in seconds: ";
        std::cin >> input;
        seconds = atof(input);
    } while (isdigit(input[0]));
}

typedef unsigned int UINT32;

void squireTime()
{
//    UINT scoarse = 1119183958;
//    UINT sfine = 4096000;3997696

//    double dt( 1.024 * double( scoarse +
//                       double( sfine ) /
4294967296 ) );

//    int seconds = int(dt);
//    int microSeconds = int((dt - seconds)*1E6);
    int seconds = 1146044373;
    int microSeconds = 1000;
    double coarse = (double(seconds) + microSeconds*1E-6) / 1.024;
    UINT32 tcoarse = UINT32(coarse);
    double fine1  = (seconds*1E6  + microSeconds) * 1.024;
    UINT32 tfine1 = UINT32(fine1) << 12;
    double fine  = microSeconds * 1.024;
    UINT32 tfine = UINT32(fine) << 12;

    std::cout << tcoarse << "  " << tfine << std::endl;

    double dt( 1.024 * ( (double)tcoarse + double( tfine1 ) / 4294967296 ) );
    int fseconds = int(dt);
    int fmicroSeconds = int((dt - fseconds)*1E6);

    std::cout << fseconds << "  " << fmicroSeconds << std::endl;
}

void recalcposition( double length, double breadth, double fromFront, double fromLeft, double orientation,
                     OrthoPosition& position )
{
    double dL  = length/2  - fromFront;
    double dB  = breadth/2 - fromLeft;

    double dxL = dL * sin( orientation );
    double dxB = - dB * cos( orientation );

    double dyL = dL * cos( orientation );
    double dyB = dB * sin( orientation );

    position.update( position.xPosition() -dxL -dxB, position.yPosition() -dyL -dyB );
}

void recalcPositionTest()
{
    double length = 100;
    double breadth = 40;
    double fromFront = 0;
    double fromLeft = 40;
    double orientation = 180;
    OrthoPosition position(-20, -50);

    recalcposition( length, breadth, fromFront, fromLeft, orientation / 180.0 * M_PI,
                    position );

    std::cout << "xPos: " << position.xPosition()
              << " yPos: " << position.yPosition()
              << std::endl;
}

void stdtest()
{
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    std::list<int>::iterator iter=l.begin();
    std::cout << *iter << std::endl;
    --iter;
    if ( iter == l.end() )
        std::cout <<"dus toch!\n";
}

//-----------------------------------------------------------------------------
//
static bool equalSmallStr( const QString& str1, const QString& str2 )
{
   int length( str1.length() <str2.length() ? str1.length() : str2.length() ); //min
   return ( strncmp( str1.data(), str2.data(), length ) == 0 );
}

void testString()
{
    QString str2("Name1 and some chars");
    QString str1("Name1");

    int length=(str1.length()<str2.length()?str1.length():str2.length()); //min
    std::cout<< "str1 is " << (strcmp(str1.toUtf8().data(), str2.toUtf8().data())==0?"equal":"NOT equal") << " to str2\n";
    std::cout<< "str1 is " << (strncmp(str1.toUtf8().data(), str2.toUtf8().data(), length)==0?"equal":"NOT equal") << " to str2 for the first " << length << "\n";

    QString stripped = "";
    QString name = "name 1HFDF3[]";
    bool isStripped(false);

    for ( size_t i(0); i<name.length(); i++ )
    {
        char c = name[i];
        if ( ('A'<=c && c<='Z') ||
             ('a'<=c && c<='z') ||
             ('0'<=c && c<='9') )
        {
            stripped += c;
        }
        else
        {
            isStripped = true;
        }
    }

    std::cout<<name <<"->" <<stripped<<std::endl;
    std::cout<<(equalSmallStr(stripped,"name1HFDF34567")?"equal":"NOT equal") << "to name1HFDF34567\n";
}

void floatstreaming()
{
    int bufSize;
    unsigned char *bufContents[4];
    float width(1000.5);
    std::ostringstream osstr;

    // output
    osstr.write( (char*)&width, 4 );

    std::string istr( osstr.str() );
    for (int i(0); i<4; i++)
    {
        std::cout << std::hex << int( istr.c_str()[i] ) << " ";
    }

    // input
    //std::istringstream isstr( istr, std::ios::binary );
    std::istringstream isstr( istr );
    isstr.unsetf( std::ios_base::skipws );

    width = 9999.99;
    isstr.read( (char*)&width, 4);
    std::cout << std::endl << width << std::endl;
}


class Test: public HRPeriodicalTimer
{
public:
    Test(const std::string& dest)
    {
        m_tmpFile = dest + "_tmp";
        m_dstFile = dest;
    }
    virtual ~Test(){}

    virtual void onExpiration()
    {
        std::cout<<"scribe\n";
        fileScribe();
    }
    bool fileScribe()
    {
        IniFileAll      planFile( m_tmpFile.data() );
        IniFileSection* section = 0;

        QString       sectionName;
        sectionName = "[CALLSIGN]";

        section = new IniFileSection( sectionName );
        if ( section->addKey("Name"))
        {
            IniArgList name;
            name(0) = "klaasje";
            section->setArgList( name );
        }QXmlStreamReader
        planFile.registerIniFileSection( section );

        if ( planFile.write() )
        {
        #ifdef WIN32
            // One call to MoveFileEx would be better here, but it leaks memory!!
            bool ret = ( !access(m_dstFile.c_str(),0) ) ? !remove(m_dstFile.c_str()) : true;
            return ret ? !rename(m_tmpFile.c_str(),m_dstFile.c_str()) : false;
        #else
            return !rename( m_tmpFile.c_str(), m_dstFile.c_str() );
        #endif
        }
        else
        {
            return !unlink(m_tmpFile.c_str());
        }
    }

    std::string m_tmpFile;
    std::string m_dstFile;
};

void TestQHash()
{
    for ( UINT_32 input(0); input<40000 ; input++ )
    {
        if ( qHash(input) != input )
            std::cout << input << " not equal\n";
    }
}


void TestGeoTrans()
{
    CondensedInit* cInit= new CondensedInit;

    cInit->SP_ProjectionMethod   =new QString("Mercator");
    cInit->SP_Reference_Latitude =new double(51 + 52.53672/60);
    cInit->SP_Reference_Longitude=new double(5  + 54.69070/60);
    cInit->SP_System_Datum       =new QString("WGE");
    cInit->SP_External_Datum     =new QString("WGE");
    cInit->SP_System_Origin_Latitude  =new double(51 + 52.53672/60);
    cInit->SP_System_Origin_Longitude =new double(5  + 54.69070/60);

    GeoTransController* geoTransController = new GeoTransController(cInit, 0);
    BaseConverter* converter = geoTransController->findConverter("CCSystemToGeo");

    double xpos=9819.562500;
    double ypos=-919.070312;

    Cart3dPoint xypos( xpos, ypos, 0.0 );

    // system to geo
    GtGeoPos* latlong = (GtGeoPos*)converter->convert( xypos );

    double latpos = latlong->latitude();
    double longpos = latlong->longitude();

    std::cout << "lat: " << latpos/M_PI*180 << "  long: " << longpos/M_PI*180 << std::endl;
}

void TestInifile()
{
    IniFileAll      iniFile( "/mnt/hgfs/share/atiini/ati_ini.use.fout");
    iniFile.read();

    std::cout<<iniFile.fileName().toUtf8().data()<<std::endl;
    IniFileSection* section = iniFile.getFirstIniFileSection();
    while (section !=0)
    {
        std::cout<< "[" << section->getSectionName().toUtf8().data() << "]" << std::endl;
        QString* key = section->firstKey();
        while (key !=0)
        {
            std::cout<< key->toUtf8().data() << ";";
            IniArgList* argList = section->getArgList();
            IniArgList::const_iterator iter = argList->begin();
            if (iter != argList->end())
            {
                while (iter != argList->end())
                {
                    std::cout<< iter->toUtf8().data()<<"|";
                    iter++;
                }
            }
            else
                std::cout<<" no args";
            std::cout<<std::endl;
            key = section->nextKey();
        }
        section = iniFile.getNextIniFileSection();
    }}

typedef unsigned int UINT_32;

void TestGeo()
{
    //GeoTransController geotransController( "coord.ini", "tell.ini" );
    Reporter reporter;

    //QString converter( "CCSensor2ToSystem" );

    //WaypointGeo geo( &reporter, "mis_line_crossing.cgm" );
    AtcGeo geo( &reporter, "handover.cgm" );

    QList<GeoItem*>* geoList = geo.getListOfGeoItems();
    QListIterator<GeoItem*> geoIter(*geoList);
    while ( geoIter.hasNext() )
        std::cout << geoIter.next()->theIdentification()->name() << " ";
    std::cout << " nr of items " << geoList->size() << std::endl;

    delete geoList;

    int nrOfPos(11);
    OrthoPosition pos[nrOfPos];
    pos[0].update(11000,-15000);
    pos[1].update(600000,-1000000);
    pos[2].update(665000,-1001900);
    pos[3].update(538118.08,-91265.75);
//    pos[4].update( 9800,-15400);
//    pos[5].update( 9500,-15500);
//    pos[6].update( 9200,-15600);
//    pos[7].update( 8900,-15700);
//    pos[8].update( 8600,-15800);
//    pos[9].update( 8300,-15900);
//    pos[10].update(8000,-16000);

//    GeoLineSituation sit( pos[0] );
//    for (int i(0); i<nrOfPos; i++)
//    {
//        GeoLineInput inp(pos[i]);
//        geo.check(&inp, &sit);

//        GeoState* state = sit.first();

//        while (state != 0)
//        {
//            GeoLineState* lineState = dynamic_cast<GeoLineState*>(state);
//            if ((lineState != 0) && lineState->isCrossing())
//            {
//                std::cout << "crossing: " << lineState->identification().name();
//            }
//            std::cout << "state: " << state->identification().name() << std::endl;

//            state = sit.next();
//        }
//    }

    GeoAreaSituation sit( pos[3] );
    GeoAreaInput inp(pos[3]);
    geo.check(&inp, &sit);
    GeoState* state = sit.first();

    while (state != 0)
    {
        GeoAreaState* areaState = dynamic_cast<GeoAreaState*>(state);
        if ((areaState != 0) && areaState->isInside())
        {
            std::cout << "inside: " << areaState->identification().name();
        }
        std::cout << "state: " << state->identification().name() << std::endl;

        state = sit.next();
    }
}
#endif /*DITHEBBENWETOCHNIETNODIG*/

int main (int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    //DEventController evctrl;
    //Comms comms( &evctrl );

//    // tell.reportInfo( "INFO_REPORT", "context1" );
    //comms.parseSettings( "comms.ini" );
    //TestHandler testHandler( &comms );

//    Test test( comms );
//    Test test;
    //evctrl.run();

    GeoClient GeoClient("127.0.0.1:8031");
    app.exec();

    // TestGeo();


    // planFile.write();

    return 0;
}

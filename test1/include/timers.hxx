//-----------------------------------------------------------------------------
//! \file       Timers.hxx
//! \brief      Definition of template class PeriodicTimer and class SingleShotTimer
//! \par
//!             
//! \author     SW Products
//! \copyright  (c) 2006, HITT Traffic B.V.
//!
//! $Id: Timers.hxx 39220 2007-02-13 08:43:15Z wientjes $
//-----------------------------------------------------------------------------
#ifndef __TIMERS_HXX__
#define __TIMERS_HXX__

#include <emit/hrpertmr.h>
#include <emit/hrtimeb.h>

template <class T>
class PeriodicTimer : public HRPeriodicalTimer
{
public:
    PeriodicTimer(T *who,double interval, void (T::*func)(void)):
      HRPeriodicalTimer(&hrTimeBaseUtc),
      callee(who),callback(func),m_interval(interval)
    {
    }

    virtual ~PeriodicTimer()
    {
        this->stop();
    }

    void onExpiration()
    {
        (callee->*callback)();
    }

    void start(double interval=-1.0)
    {
        if(interval>0)
        {
            m_interval=interval;
        }
        this->stop();
        HRPeriodicalTimer::start( HRTimeSpan(m_interval*1.0e+6) );
    }
    
    void reset()
    {
        this->stop();
        HRPeriodicalTimer::start( HRTimeSpan(m_interval*1.0e+6) );
    }
private:
    T      *callee;
    void (T::*callback)(void);
    double m_interval;
};

template <class T>
class SingleShotTimer : public HRSingleShotTimer
{
public:
    SingleShotTimer(T *who,double interval, void (T::*func)(void)):
      HRSingleShotTimer(&hrTimeBaseUtc),
      callee(who),callback(func),m_interval(interval)
    {
    }

    virtual ~SingleShotTimer()
    {
        this->stop();
    }

    void onExpiration()
    {
        (callee->*callback)();
    }

    void start(double interval=-1.0)
    {
        if(interval>=0)
            m_interval=interval;
        this->stop();
        HRSingleShotTimer::start( HRTimeSpan(m_interval*1.0e+6) );
    }
    
    void reset()
    {
        this->stop();
        HRSingleShotTimer::start( HRTimeSpan(m_interval*1.0e+6) );
    }
private:
    T      *callee;
    void (T::*callback)(void);
    double m_interval;
};

#endif // __TIMERS_HXX__


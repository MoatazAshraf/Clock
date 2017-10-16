#include "Clock.h"
void Clock::sethour(int x)
{
    if(x <=23 && x >=0)
        hour=x;
    else
        a = 1;

}
int Clock::gethour()
{
    return hour;

}
void Clock::setminute(int y)
{
    if(y <= 59 && y>= 0)
        minute=y;
    else
        a = 1;
}
int Clock::getminute ()
{

    return minute;

}
void Clock::setsecond(int z)
{
     if(z <=59 && z >=0)
        second=z;
    else
        a = 1;
}
int Clock::getsecond ()
{
    return second;

}
int Clock::geta(){
return a ;
}

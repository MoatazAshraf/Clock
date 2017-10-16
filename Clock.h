#ifndef CLOCK_H
#define CLOCK_H
#include <iostream>
using namespace std;
/*
 *  معتز أشرف محمد أحمد
 *  قسم : رياضة وحاسب
 */
class Clock
{
    public:
        void sethour (int);
        int gethour();
        void setminute (int);
        int getminute ();
        void setsecond (int);
        int getsecond ();
        int geta();

    private:
        int hour;
        int minute;
        int second;
        int a=0;
};

#endif // CLOCK_H

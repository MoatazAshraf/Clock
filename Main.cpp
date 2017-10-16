#include "Clock.cpp"
int main()
{

    int x,y,z;
    Clock C;

    cout<<"please enter number of hours , number of minutes , and number of seconds"<<endl;
    cin>>x>>y>>z;

    C.sethour(x);
    C.setminute(y);
    C.setsecond(z);

    if (C.geta() == 0)
        cout<<"hour : "<<C.gethour()<<" minute : "<<C.getminute()<<" second : "<<C.getsecond()<<endl;
    else
        cout<< "error!";

    return 0;
}

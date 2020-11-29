#include<iostream>

using namespace std;

/* Program to enter time in seconds and return the time as
    hh:mm:ss */

int main()
{
    int sec,min,hrs;
    cout<<"Enter the time in Seconds : ";
    cin>>sec;
    min = sec/60;       // convert seconds to minutes
    sec = sec%60;       // leftover seconds
    hrs = min/60;       // convert minutes to hours
    min = min%60;       // leftover minutes
    
    cout<<"The time in HH:MM:SS format is  "<<hrs<<" : "<<min<<" : "<<sec<<endl<<endl;
    
    return 0;
    
}

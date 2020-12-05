#include<iostream>

using namespace std;

/* Program to swap two variables without using a temporary variable  */

int main()
{
    int a,b;
    cout<<endl<<"Enter the First number  (a) : ";
    cin>>a;
    cout<<endl<<"Enter the Second number (b) : ";
    cin>>b;
    
    
    cout<<endl<<"*******************************************"<<endl;
    
    cout<<endl<<"BEFORE SWAPPING "<<endl;
    cout<<endl<<"First Number  (a) : "<<a;
    cout<<endl<<"Second Number (b) : "<<b;
    
    a = a - b;
    b = a + b;
    a = b - a;
    
    cout<<endl;
    
    cout<<endl<<"AFTER SWAPPING "<<endl;
    cout<<endl<<"First Number  (a) : "<<a;
    cout<<endl<<"Second Number (b) : "<<b;
    
    cout<<endl<<endl<<"*******************************************";
    
    cout<<endl<<endl;
    
    return 0;
    
}



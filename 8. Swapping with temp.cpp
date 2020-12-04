#include<iostream>

using namespace std;

/* Program to swap 2 variables using a temporary variable */

int main()
{
    int x,y,temp;
    cout<<endl<<"Enter the first number  (x) : ";
    cin>>x;
    cout<<endl<<"Enter the second number (y) : ";
    cin>>y;
    temp = x;
    x = y;
    y = temp;
    cout<<endl<<"*******************************************"<<endl;
    cout<<endl<<"AFTER SWAPPING "<<endl;
    cout<<endl<<"First Number  (x) : "<<x;
    cout<<endl<<"Second Number (y) : "<<y;
    
    cout<<endl<<endl<<"*******************************************";
    
    cout<<endl<<endl;
    
    return 0;
}

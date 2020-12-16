#include<iostream>

using namespace std;

/*  Program to find the larger of the two numbers  */

int main()
{
    float a,b;
    
    cout<<"Enter the First Number  : ";
    cin>>a;
    
    cout<<"Enter the Second Number : ";
    cin>>b;
    
    if(a>b)
        cout<<endl<<a<<" is greater than "<<b;
    else if (b>a)
        cout<<endl<<b<<" is greater than "<<a;
    else
        cout<<endl<<"Both numbers are equal";
    
    cout<<endl<<endl;
    
    return 0;
    
    
}


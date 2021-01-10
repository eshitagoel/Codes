#include<iostream>

using namespace std;

/* Program to find the larger of two numbers using a function */

void larger(int a, int b)
{
    if(a>b)
        cout<<endl<<a<<" is greater than "<<b;
    else if (b>a)
        cout<<endl<<b<<" is greater than "<<a;
    else
        cout<<endl<<"Both numbers are equal";

}

int main()
{
    int x,y;
    cout<<"Enter first number  : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    
    larger(x,y);
    
    cout<<endl<<endl;
    
    return 0;
}

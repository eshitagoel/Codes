#include<iostream>

using namespace std;

/* Write a program to find the sum and average of 10 integers entered
    by the user (while-loop) */

int main()
{
    float sum, avg, n;
    sum = 0;
    
    cout<<"Enter 10 numbers : "<<endl<<endl;
    
    int i = 1;
    while (i<=10)
    {
        cout<<"Enter number "<<i<<" : ";
        cin>>n;
        sum = sum + n;
        i++;
    }
    
    avg = sum/10;
    
    cout<<endl;
    
    cout<<"Sum     : "<<sum<<endl;
    cout<<"Average : "<<avg<<endl;
    
    cout<<endl<<endl;
    
    return 0;
    
}

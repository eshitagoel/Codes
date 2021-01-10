#include<iostream>

using namespace std;

/* Program to find the sum and average of 10 numbers entered by the user and also display them */

int main()
{
    int x[10];
    int sum = 0;
    float avg;
    
    cout<<"Enter 10 numbers : "<<endl<<endl;
    
    for (int i = 0; i<10; ++i)
    {
        cin>>x[i];
        sum = sum + x[i];
    }
    
    cout<<endl<<"The sum is : "<<endl<<endl;
    
    for (int i = 0; i<10; ++i)
    {
        cout<<x[i];
        if(i<9)
            cout<<" + ";
    }
    
    cout<<" = "<<sum<<endl<<endl;
    
    avg = sum/10.0;
    cout<<"The Average is : "<<avg<<endl<<endl;
    
    return 0;
    
}

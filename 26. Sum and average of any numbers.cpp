#include<iostream>

using namespace std;

/*  Program to find the sum and average of some integers entered by the user. (while-loop) */

int main()
{
    float sum,avg,a;
    sum = 0;
    
    cout<<"Enter the numbers, Enter 0 when done. "<<endl<<endl;
    
    float i = 1;
    cout<<"Enter number 1 : ";
    cin>>a;
    
    while (a)
    {
        i++;
        sum = sum + a;
        cout<<"Enter number "<<i<<" : ";
        cin>>a;
     
    }
    
    i--;  // To remove the 0 input count
    
    avg = sum/i;
    
    cout<<endl;
    
    cout<<"Sum of "<<i<<" numbers     : "<<sum<<endl;
    cout<<"Average of "<<i<<" numbers : "<<avg<<endl;
    
    cout<<endl<<endl;
    
    return 0;
}



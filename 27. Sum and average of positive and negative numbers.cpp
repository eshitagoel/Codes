#include<iostream>

using namespace std;

/*  Program to find the sum and average of positive and negative numbers entered by the user.  */

int main()
{
    float pos_sum, neg_sum, pos_avg, neg_avg, a;
    float pos,neg;
    
    pos_sum = 0;
    neg_sum = 0;
    
    pos = neg = 0;
    
    int i = 1;
    
    cout<<"Enter the numbers, Enter 0 when done : "<<endl<<endl;
    
    cout<<"Number "<<i<<" : ";
    cin>>a;
    
    while(a)
    {
        if(a>0)
        {
            pos_sum = pos_sum + a;
            pos++;
            
        }
        
        else
        {
            neg_sum = neg_sum + a;
            neg++;
            
        }
        
        i++;
        
        cout<<"Number "<<i<<" : ";
        cin>>a;
        
    }
    
    cout<<endl;
    
    if(pos==0)
    {
        cout<<endl<<"No positive numbers entered!";
    }
    
    else
    {   cout<<endl;
        pos_avg = pos_sum/pos;
        cout<<"Sum of Positive Numbers     : "<<pos_sum<<endl;
        cout<<"Average of Positive Numbers : "<<pos_avg<<endl;
    }
    
    cout<<endl;
    
    if(neg==0)
    {
        cout<<endl<<"No negative numbers entered!";
    }
    
    else
    {   cout<<endl;
        neg_avg = neg_sum/neg;
        cout<<"Sum of Negative Numbers     : "<<neg_sum<<endl;
        cout<<"Average of Negative Numbers : "<<neg_avg<<endl;
    }
    
    cout<<endl<<endl;
    
    return 0;
    
}


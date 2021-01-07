#include<iostream>

using namespace std;

/*  Program to print the sum of the series
    1 - 1/2 + 1/3 - ...... + (-1)^(n+1) 1/n
 */

int main()
{
    float n;
    float sum = 0;
    float sign = 1;
    
    cout<<"Enter the value of n : ";
    cin>>n;
    
    cout<<endl;
    
    if(n==0)
        cout<<"Invalid Input!"<<endl<<endl;
    else
    {
        for (float i = 1; i<=n ; ++i)
        {
           if(sign == 1 )
            cout<<"+ 1/"<<i<<" ";
          else
            cout<<"- 1/"<<i<<" ";
                
            sum = sum + sign*(1/i);
            
            sign = sign*(-1);
        }
        
        cout<<" = "<<sum;
        
    }
    
    cout<<endl<<endl;
    return 0;
    
}

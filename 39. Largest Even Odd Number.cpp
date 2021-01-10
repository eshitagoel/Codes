#include<iostream>

using namespace std;

/* Program to let user enter numbers until 0 is pressed and output the largest even and odd number entered */

int main()
{
    int n;
    int le = 0,lo = 0;
    
    int i = 2;
    
    cout<<"Enter number 1 : ";
    cin>>n;
    
    while(n)
    {
        if(n%2==0)
        {
            if(n>le)
                le = n;
        }
        
        else
        {
            if(n>lo)
                lo = n;
        }
        
        cout<<"Enter number "<<i<<" : ";
        cin>>n;
        i++;
    }
    
    cout<<endl<<endl;
    
    if(le)
        cout<<"Largest even number entered is "<<le<<endl;
    else
        cout<<"No even numbers entered!"<<endl;
    
    if(lo)
        cout<<"Largest odd number entered is "<<lo<<endl;
    else
        cout<<"No odd numbers entered!"<<endl;
    
    cout<<endl<<endl;
    
    return 0;

}

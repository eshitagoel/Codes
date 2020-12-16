#include<iostream>

using namespace std;

/* To check if a numberis postive, negative or zero using if-else */

int main()
{
    float a;
    
    cout<<"Enter a number : ";
    cin>>a;
    
    if(a>0)
        
        cout<<endl<<"The number "<<a<<" is POSITIVE";
    
    else if(a<0)
        
        cout<<endl<<"The number "<<a<<" is NEGATIVE";
    
    else
        
        cout<<endl<<"The number is ZERO";
    
    cout<<endl<<endl;
    
    return 0;
        
}


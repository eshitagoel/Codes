#include<iostream>

using namespace std;

/*  Program to find the largest of 3 numbers  */

int main()
{
    float a,b,c,large;
    
    cout<<"Enter the First Number  : ";
    cin>>a;
    cout<<"Enter the Second Number : ";
    cin>>b;
    cout<<"Enter the Third Number  : ";
    cin>>c;
    
    cout<<endl;
    
    if(a==b && b==c)
        
        cout<<"All three numbers are equal!";
    else
    {
        if (a>b)
        {
            if(a>c)
                large = a;
            else
                large = c;
        }
        
        else
        {
            if(b>c)
                large = b;
            else
                large = c;
        }
        
        cout<< "The largest among "<<a<<", "<<b<<" and "<<c<<" is : "<<large;
        
    }
    
    
    cout<<endl<<endl;
    
    return 0;
    
    
}


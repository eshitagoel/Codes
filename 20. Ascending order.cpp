#include<iostream>

using namespace std;

/*  Sorting 3 numbers in ascending order  */

int main()
{
    float a,b,c;
    
    cout<<"Enter the First Number  : ";
    cin>>a;
    cout<<"Enter the Second Number : ";
    cin>>b;
    cout<<"Enter the Third Number  : ";
    cin>>c;
    
    cout<<endl;
    
    if (a>b)
    {
        if(b>c)
        {
            cout<<"The numbers in ascending order : "<<c<<" < "<<b<<" < "<<a;
        }
        else
        {
            if (b==c)
                cout<<"The numbers in ascending order : "<<c<<" = "<<b<<" < "<<a;
            else if (a>c)
                cout<<"The numbers in ascending order : "<<b<<" < "<<c<<" < "<<a;
            else if (a<c)
                cout<<"The numbers in ascending order : "<<b<<" < "<<a<<" < "<<c;
            else
                cout<<"The numbers in ascending order : "<<b<<" < "<<c<<" = "<<a;
        }
    }
    
    else if (a<b)
    {
        if(a>c)
        {
            cout<<"The numbers in ascending order : "<<c<<" < "<<a<<" < "<<b;
        }
        else
        {
            if (a==c)
                cout<<"The numbers in ascending order : "<<c<<" = "<<a<<" < "<<b;
            else if (b>c)
                cout<<"The numbers in ascending order : "<<a<<" < "<<c<<" < "<<b;
            else if (b<c)
                cout<<"The numbers in ascending order : "<<a<<" < "<<b<<" < "<<c;
            else
                cout<<"The numbers in ascending order : "<<a<<" < "<<c<<" = "<<b;
        }
    }
    
    else
    {
        if(b>c)
            cout<<"The numbers in ascending order : "<<c<<" < "<<b<<" = "<<a;
        else
        {
            if (b==c)
                cout<<"The numbers are equal : "<<c<<" = "<<b<<" = "<<a;
            else
                cout<<"The numbers in ascending order : "<<a<<" = "<<b<<" < "<<c;
        }
    }
    
    cout<<endl<<endl;
    
    return 0;

}


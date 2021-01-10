#include<iostream>

using namespace std;

/* Program to find GCD and LCM of two numbers using user defined functions */

int gcd( int, int);
int lcm( int, int);


int main()
{
    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    
    cout<<endl;
    
    cout<<"The GCD of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;
    cout<<"The LCM of "<<a<<" and "<<b<<" is : "<<lcm(a,b);
    
    cout<<endl<<endl;
    
    return 0;
    
}

int gcd(int x, int y)
{
    int z;
    
    while(1)
    {
        z = x%y;
        if(z==0)
            return y;
        x=y;
        y=z;
    }
}

int lcm(int x, int y)
{
    int max = x>y ? x : y;
    
    while(1)
    {
        if(max%x == 0 && max%y == 0)
            return max;
        else
            max++;
    }
}

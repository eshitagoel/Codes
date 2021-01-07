#include<iostream>

using namespace std;

/*  Program to find factorial of a number  */

int main()
{
    int n;
    int fact = 1;
    
    cout<<"Enter the number whose factorial is to be found : ";
    cin>>n;
    
    for (int i = 1; i <= n; ++i)
    {
        fact = fact*i;
    }
    
    cout<<endl<<"Factorial of "<<n<<" is : "<<fact<<endl<<endl;

    return 0;
}

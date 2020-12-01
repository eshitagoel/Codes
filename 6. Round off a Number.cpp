#include<iostream>

using namespace std;

/* Program to Round off a positive floating point number to the nearest integer */

int main()
{
    float n;
    int m;
    
    cout<<"Enter the decimal number : ";
    cin>>n;
    m = n+0.5;
    cout<<endl<<"Rounding off "<<n<<" gives  : "<<m<<endl;
    
    cout<<endl<<endl;
    return 0 ;
    
}

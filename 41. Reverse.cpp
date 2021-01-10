#include<iostream>
using namespace std;

/* To check if a number is palindrome or not */

int main()
{
    int n;
    cout<<"Enter the number to be reversed : ";
    cin>>n;
    
    int temp = n;
    int p = 0;
    
    while(temp)
    {
        p = p*10 + temp%10;
        temp = temp/10;
    }
    
    cout<<endl<<"The reverse of the number is : "<<p<<endl;
    
    cout<<endl<<endl;
    
    return 0;
    
}

#include<iostream>

using namespace std;

/*  program to find the number of digits in a natural number
    and find the sum of the digits */

int main()
{
    int num;
    int n = 0;
    int sum = 0;
    
    cout<<"Enter the number : ";
    cin>>num;
    
    int temp = num;
    
    while(temp)
    {
        sum = sum + (temp%10) ;
        temp = temp/10;
        n++;
    }
    
    cout<<endl;
    
    cout<<"Number of digits in "<<num<<" : "<<n<<endl;
    cout<<"Sum of digits in "<<num<<"    : "<<sum;
    
    cout<<endl<<endl;
    
    return 0;
}

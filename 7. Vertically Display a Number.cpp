#include<iostream>

using namespace std;

/*  Program to display a 4 digit number vertically */

int main()
{
    int n, first,second,third,fourth;
    cout<<"Enter the 4 digit number : ";
    cin>>n;
    first = n/1000;
    n=n%1000;
    second = n/100;
    n = n%100;
    third = n/10;
    n = n%10;
    fourth = n;
    cout<<endl<<"The number in vertical format : "<<endl;
    cout<<endl<<first<<endl<<second<<endl<<third<<endl<<fourth;
    
    cout<<endl<<endl;
    return 0;
}

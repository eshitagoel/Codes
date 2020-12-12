#include<iostream>

using namespace std;

/*  To find absolute value of an interger using if-else  */

int main()
{
    int a;
    
    cout<<"Enter an integer : ";
    cin>>a;
    
    if(a>0)
        cout<<endl<<"The absolute value of "<<a<<" is : "<<a;
    else
        cout<<endl<<"The absolute value of "<<a<<" is : "<<-a;
    
    cout<<endl<<endl;
    
    return 0;
}



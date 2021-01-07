#include<iostream>

/* Program to input first two terms of a Fibonacci Sequence and
   the number of terms and then print the Fibonacci Sequence */

using namespace std;

int main()
{
    int fno, sno;
    int sum;
    int n;
    
    cout<<endl<<"Enter the first term  : ";
    cin>>fno;
    
    cout<<endl<<"Enter the second term : ";
    cin>>sno;
    
    if(sno<fno)
    {
        int temp = fno;
        fno = sno;
        sno = temp;
    }
    
    cout<<endl<<"How many terms?       : ";
    cin>>n;
    
    cout<<endl<<fno<<"  "<<sno<<"  ";
    
    for(int i = 1; i<=n-2; ++i)
    {
        sum = fno+sno;
        cout<<sum<<"  ";
        
        fno = sno;
        sno = sum;
    }
    
    cout<<endl<<endl;
    
    return 0;
    
}

#include<iostream>

using namespace std;

/* Program to find the sum and average of n integers entered by the user. (while-loop) */

int main()
{
    float sum, avg, a;
    int n;
    sum = 0;
    
    cout<<"How many numbers do you want to enter? ";
    cin>>n;
    
    if(n==0)
        
        cout<<"Invalid input! "<<endl<<endl;
    
    else
    {
        cout<<endl<<"Enter "<<n<<" numbers : "<<endl<<endl;
        
        int i = 1;
        while (i<=n)
        {
            cout<<"Enter number "<<i<<" : ";
            cin>>a;
            sum = sum + a;
            i++;
        }
        
        avg = sum/(static_cast<float>(n));
        
        cout<<endl;
        
        cout<<"Sum     : "<<sum<<endl;
        cout<<"Average : "<<avg<<endl;
        
    }
    
    cout<<endl<<endl;
    
    return 0;
    
}

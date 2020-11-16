#include<iostream>

using namespace std;

//          PRACTICAL - 1
//          SUM OF SERIES :  1/1 + 1/2 + 1/3 + .... + 1/N FOR ANY INTEGER N

void Sum(int N)
{
    float sum = 0;
    
    for(float i=1; i<=N; ++i)
    {
        sum = sum + 1/i;
        
        if(i==1)
        {
            cout<<"The Sum : "<<"1/"<<i;
        }
        else
        {
            cout<<" + 1/"<<i;
        }
    }
    
    cout<<" = "<<sum<<endl<<endl;
    
}

//          main function:

int main()
{
    int N;
    cout<<endl<<"Enter the integer N : ";
    cin>>N;
    Sum(N);
    
    return 0;
}

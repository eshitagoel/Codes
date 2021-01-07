#include<iostream>

/* Finding the proper factors of a number */

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number whose proper factors are to be found : ";
    cin>>n;
    int flag = 0;
    
    cout<<endl;
    
    for(int i=2; i<n; ++i )
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            flag++;
        }
            
    }
    
    if(flag == 0)
        cout<<endl<<"No proper factors!";
        
    else
    {
        if(flag == 1)
        {
            cout<<"is the proper factor of "<<n;
            cout<<endl<<"There is "<<flag<<" proper factor!";
        }
            
        
        else
        {
            cout<<"are the proper factors of "<<n;
            cout<<endl<<"There are "<<flag<<" proper factors!";
        }
        
    }
    
    cout<<endl<<endl;
    
    return 0;
}


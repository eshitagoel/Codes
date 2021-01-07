#include<iostream>

using namespace std;

//          CHECKING IF A NUMBER IS PRIME OR NOT

int main()
{
    int n;
    int count = 0;
    
    cout<<endl<<"Enter a postive number : ";
    cin>>n;
    
    if(n>1)
    {
        for(int i = 2; i<=n/2 ; ++i)
        {
            if(n%i == 0)
            {
                count++;
                break;
            }
                
        }
        
        if(count)
            cout<<endl<<"The number "<<n<<" is NOT prime!"<<endl;
        else
            cout<<endl<<"The number "<<n<<" is prime!"<<endl;
    }
    
    else if (n==1)
        cout<<endl<<"1 is neither prime nor composite! "<<endl;
    
    else
        cout<<endl<<"The number entered is NOT postive! "<<endl;
    
    cout<<endl;
    
    return 0;
}

#include<iostream>

/* Find the first 4 perfect numbers */

using namespace std;

int main()
{
    int sum;
    int c = 0;
    
    cout<<endl<<"First 4 perfect numbers are : "<<endl<<endl;
    
    for(int i = 1 ;; i++)
    {
        sum = 0;
        
        if(c==4)
        break;
        
        else
        {
            for(int j=1; j<=i/2; ++j)
            {
                if(i%j==0)
                sum = sum + j;
            }
            
            if(sum == i)
            {
                cout<<c+1<<") "<<i<<endl;
                c++;
                
            }
        }
        
    }
    
    cout<<endl<<endl;
    
    return 0;
    
}

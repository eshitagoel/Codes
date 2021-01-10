#include<iostream>

using namespace std;

/* Program to sort 10 numbers in ascedning order */

int main()
{
    int a[10];
    int temp;
    
    cout<<"Enter 10 numbers : "<<endl<<endl;
    
    for (int i = 0; i<10; ++i)
    {
        cout<<"Number "<<i+1<<" : ";
        cin>>a[i];
    }
    
    for(int i = 0; i<10; i++)
    {
        for(int j = i+1 ; j<10; ++j)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    cout<<endl<<"The numbers in ascending order are : "<<endl;
    
    for(int i = 0; i< 10; i++)
    {
        cout<<a[i];
        if(i<9)
            cout<<" , ";
    }
    
    cout<<endl<<endl;
    
    return 0;
}

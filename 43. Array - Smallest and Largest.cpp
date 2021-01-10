#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the array : "<<endl;
    for(int i = 0; i<n ; ++i)
    {
        cout<<"  ";
        cin>>arr[i];
    }
    
    int s = arr[0];
    int l = arr[0];
    
    for(int j = 0; j<n; ++j)
    {
        if( s > arr[j] )
            s = arr[j];
        
        if( l < arr[j] )
            l = arr[j];
    }
    
    cout<<endl<<endl<<"Largest  : "<<l<<endl;
    cout<<"Smallest : "<<s;
    
    cout<<endl<<endl;
    
    return 0;
}

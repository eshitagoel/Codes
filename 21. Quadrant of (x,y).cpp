#include<iostream>

using namespace std;

/*  Progra to find the location of a point in the X-Y plane */

int main()
{
    float x,y;
    cout<<"Enter the x coordinate : ";
    cin>>x;
    cout<<"Enter the y coordinate : ";
    cin>>y;
    
    cout<<endl;
    cout<<"The point your enetered is ("<<x<<","<<y<<")"<<endl<<endl;
    
    if(x>0 && y>0)
        cout<<"It lies in the First Quadrant";
    
    else if (x<0 && y>0)
        cout<<"It lies in the Second Quadrant";
    
    else if (x<0 && y<0)
        cout<<"It lies in the Third Quadrant";
    
    else if(x>0 && y<0)
        cout<<"It lies in the Fourth Quadrant";
    
    else if (y==0)
    {
        if(x==0)
            cout<<"The point is the origin ";
        else
            cout<<"It lies on the x-axis ";
    }
    else
        cout<<"It lies on the y-axis ";
    
    cout<<endl<<endl;
    
    return 0;
        
    
}


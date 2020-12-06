#include<iostream>
#include<cmath>

using namespace std;

/* To find the area of a triangle when the 3 sides are entered by
    the user */

int main()
{
    float a,b,c,s;
    
    cout<<"Enter the sides of a Triangle : "<<endl<<endl;
    cout<<"Side 1 : ";
    cin>>a;
    cout<<"Side 2 : ";
    cin>>b;
    cout<<"Side 3 : ";
    cin>>c;
    
    s = (a+b+c)/2;
    
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<endl<<"Area of this triangle is : "<<area<<" sq. units";
    
    cout<<endl<<endl;
    return 0;
    
}


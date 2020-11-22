
#include <iostream>

using namespace std;

// Program to calculate the area and perimeter of a rectangle

int main()
{
    float l,b,perimeter,area;
    
    cout<<"Enter the dimensions of a rectangle : "<<endl;
    
    cout<<endl<<"Length     : ";
    cin>>l;
    cout<<endl<<"Breadth    : ";
    cin>>b;
    
    perimeter = 2*(l+b);
    area = l*b;
    
    cout<<endl<<"A rectangle of length "<<l<<" and breadth "<<b<<" has preimeter = "<<perimeter<<" and area = "<<area<<endl;
    cout<<endl<<endl;
        
    return 0;

}

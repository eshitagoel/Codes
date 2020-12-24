#include<iostream>
#include<cmath>

using namespace std;

/*  Write a program that prompts the user to enter the lengths of three sides of a triangle and then outputs a message indicating whether the triangle is a right triangle or a scalene triangle.  */

int main()
{
    float a,b,c;
    
    cout<<"Enter the 3 sides of a Triangle: "<<endl<<endl;
    
    cout<<"Side 1 : ";
    cin>>a;
    cout<<"Side 2 : ";
    cin>>b;
    cout<<"Side 3 : ";
    cin>>c;
    
    cout<<endl<<endl;
    
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        if((a*a == b*b + c*c)||(b*b == a*a + c*c)||(c*c == a*a + b*b))
            cout<<"Triangle having sides "<<a<<", "<<b<<" and "<<c<<" is a Right angle triangle"<<endl;
        else
            cout<<"Triangle having sides "<<a<<", "<<b<<" and "<<c<<" is NOT a Right angle triangle"<<endl;
        
        if(a==b || a==c || b==c)
            cout<<"It is NOT scalene! "<<endl;
        else
            cout<<"It is scalene! "<<endl;
            
    }
    else
        cout<<"NOT a triangle! "<<endl;
    
    
    cout<<endl<<endl;
    
    return 0;
    
}


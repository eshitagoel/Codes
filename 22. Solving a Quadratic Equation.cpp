#include<iostream>
#include<cmath>

using namespace std;

/*  Write a program that prompts the user to input the value of a, b and c
 involved in the equation
 ax^2 + bx + c = 0
 and outputs the type of the
 roots of the equation. Also the program should output all the roots of the
 equation.  */

int main()
{
    float a,b,c;
    float D;
    float root1, root2;
    float imaginary,real;
    
    cout<<"Enter the coefficients for the quadratic equation ax^2 + bx + c = 0 ";
    cout<<endl<<endl;
    
    cout<<"Coefficient for  :- "<<endl<<endl;
    cout<<"             x^2 : ";
    cin>>a;
    cout<<"               x : ";
    cin>>b;
    cout<<"        Constant : ";
    cin>>c;
    
    cout<<endl;
    
    cout<<"The equation is : "<<a<<"x^2 ";
    (b>=0)?cout<<"+ "<<b<<"x ":cout<<"- "<<-b<<"x ";
    (c>=0)?cout<<"+ "<<c:cout<<"- "<<-c;
    
    cout<<endl<<endl;
    
    D = pow(b,2) - 4*a*c;  // Discriminant
    
    if(a==0)
    {
        if(b==0)
        {
            cout<<"Not a valid input!"<<endl;
        }
        else
        {
            root1 = -c/b;
            cout<<"Root : "<<root1<<endl;
            
        }
       
        
    }
    
    else
    {
        if(D>0)
        {
            cout<<"The roots are Real and Distinct "<<endl<<endl;
            
            root1 = (-b + sqrt(D))/(2*a);
            root2 = (-b - sqrt(D))/(2*a);
            
            cout<<"Root 1 : "<<root1<<endl;
            cout<<"Root 2 : "<<root2<<endl;
        }
        
        else if(D==0)
        {
            cout<<"The roots are Real and repeating "<<endl<<endl;
            
            root1 = (-b)/(2*a);
            
            cout<<"Repeating Root : "<<root1<<endl;
            
        }
        
        else
        {
            cout<<"The roots are Complex "<<endl<<endl;
            
            real = (-b)/(2*a);
            imaginary = sqrt(-D)/(2*a);
            
            cout<<"Root 1 : "<<real<<" + ("<<imaginary<<")i"<<endl;
            cout<<"Root 2 : "<<real<<" - ("<<imaginary<<")i"<<endl;
        }
    }
    
    
    cout<<endl<<endl;
    
    return 0;
    
}


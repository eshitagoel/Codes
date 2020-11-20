#include<iostream>

using namespace std;

/*  Program to input the marks of a student in 5 subjects and
    calculate the total marks and percentage obtained in class XII
    (5 papers of 100 marks each) */

int main()
{
    int a,b,c,d,e,sum;
    
    cout<<"Enter the marks obtained in the following subjects : "<<endl;
    
    cout<<endl<<"English        : ";
    cin>>a;
    cout<<endl<<"Physics        : ";
    cin>>b;
    cout<<endl<<"Chemistry      : ";
    cin>>c;
    cout<<endl<<"Mathematics    : ";
    cin>>d;
    cout<<endl<<"Computers      : ";
    cin>>e;
    
    sum = a+b+c+d+e;
    
    cout<<endl<<"Total Marks        : "<<sum;
    cout<<endl<<"Percentage Marks   : "<<sum/5.0<<"%"<<endl<<endl;
    
    return 0;
}


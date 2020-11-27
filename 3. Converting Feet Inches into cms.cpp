#include<iostream>

using namespace std;

/* Program to input height in feet and inches and convert it to centimetres */

int main()
{
    float feet, inches;
    float cms;
    
    cout<<"Enter your height in Feet and inches : "<<endl;
    cout<<"Feet     : ";
    cin>>feet;
    cout<<"Inches   : ";
    cin>>inches;
    inches = feet*12 +inches;
    cms = inches*2.54;
    cout<<endl<<"Your height in cms is : "<<cms<<endl<<endl;
    
    return 0;
    
}

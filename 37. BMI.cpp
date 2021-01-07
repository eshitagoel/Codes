#include<iostream>
using namespace std;

//Program to find the BMI taking weight in kilograms and height in feet and inches.
/*
 
BMI = (weights in kgs)/(height in meters)^2.
BMI <18.5        :  UNDERWEIGHT
18.5<=BMI<=24.9  :  HEALTHY
BMI>24.9         :  OVERWEIGHT
 
*/

int main()
{
    float weight, feet, inches;
    float height;
    
    cout<<"Enter your weight in kilograms : ";
    cin>>weight;
    cout<<endl;
    cout<<"Enter your height : "<<endl;
    cout<<"Feet   : ";
    cin>>feet;
    cout<<"Inches : ";
    cin>>inches;
    
    height = feet*12*0.0254 + inches*0.0254;
    
    cout<<endl<<"Your height in meteres is : "<<height<<endl;
    
    float BMI = weight/(height*height);
    cout<<endl<<"Your Body Mass Index (BMI) is : "<<BMI<<endl;
    
    if(BMI<18.5)
        cout<<endl<<"You are UNDERWEIGHT!"<<endl<<endl;
    else if (18.5<= BMI && BMI <= 24.9)
        cout<<endl<<"You are HEALTHY!"<<endl<<endl;
    else
        cout<<endl<<"You are OVERWEIGHT!"<<endl<<endl;
    
    return 0;
    
}

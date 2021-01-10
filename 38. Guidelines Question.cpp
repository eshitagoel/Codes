#include<iostream>

using namespace std;

/*
 Write a program that uses while loops to perform the following steps:
 
 a) Prompt the user to input two integers : firstNum and secondNum (firstNum should be less than secondNum).
 b) Output all odd and even numbers between firstNum and secondNum.
 c) Output the sum of all even numbers between firstNum and secondNum.
 d) Output the sum of the square of the odd numbers between firstNum and secondNum.
 e) Output all uppercase letters corresponding to the numbers between
    firstNum and secondNum, if any.
 
 */

int main()
{
    int firstNum, secondNum;
    int EvenSum = 0, OddSum = 0;
    int i;
    int flag = 0;
    
    cout<<"Enter the First Number  : ";
    cin>>firstNum;
    cout<<"Enter the second number : ";
    cin>>secondNum;
    
    if(firstNum>secondNum)
        cout<<"First Number should be less than Second Number! "<<endl<<endl;
    else
    {
        i = firstNum+1;
        
        cout<<endl<<"Odd Numbers between "<<firstNum<<" and "<<secondNum<<" : "<<endl;
        while(i<secondNum)
        {
            if(i%2==1)
            {
                cout<<i<<" ";
                OddSum = OddSum + i*i;
            }
            i++;
        }
        
        cout<<endl<<endl;
        
        i = firstNum+1;
        
        cout<<endl<<"Even Numbers between "<<firstNum<<" and "<<secondNum<<" : "<<endl;
        while(i<secondNum)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
                EvenSum = EvenSum + i;
            }
            i++;
        }
        
        cout<<endl<<endl;
        
        cout<<"Sum of all even numbers       : "<<EvenSum<<endl<<endl;
        cout<<"Sum of sqaures of odd numbers : "<<OddSum<<endl<<endl;
        
        i = firstNum+1;
        
        cout<<endl<<"Uppercase Characters between "<<firstNum<<" and "<<secondNum<<" : "<<endl;
        while(i<secondNum)
        {
            if(i>=65 && i<=90)
            {
                cout<<static_cast<char>(i)<<" ";
                flag++;
                
            }
            i++;
        }
        
    }
    
    if(!flag)
        cout<<"No Uppercase letters! ";
    
    cout<<endl<<endl;
    
    return 0;
    
}

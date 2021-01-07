#include<iostream>
#include<cstdlib>
#include<ctime>

/* Program to create a guessing game that gives the user 6 chances to guess a random number between 0 to 99 */

using namespace std;

int main()
{
    cout<<endl<<"********************* GUESSING GAME ***********************"<<endl<<endl;
    
    int num = (rand() + time(0))%100;
    int guess;
    
    cout<<"You have 6 guesses to guess the number which lies from 0 - 99 !! "<<endl<<endl;
    
    for(int i = 1; i<=6; ++i)
    {
        cout<<"Your guess : ";
        cin>>guess;
        
        if(num==guess)
        {
            cout<<endl<<endl<<"Congratulations! You correctly guessed the number "<<num<<" !!";
        }
        else
        {
            if(i<6)
            {
                if(guess<num)
                {
                    cout<<endl<<"Your required number is more than "<<guess<<" ! "<<endl<<"You have "<<6-i<<" chances remaining!"<<endl<<endl;
                }
                
                else
                {
                    cout<<endl<<"Your required number is less than "<<guess<<" ! "<<endl<<"You have "<<6-i<<" chances remaining!"<<endl<<endl;
                }
            }
            
            else
            {
                cout<<endl<<"Sorry! You couldn't guess the number! "<<endl<<"The number was "<<num<<" ! ";
            }
            
        }
    }
    
    cout<<endl<<endl;
    
    return 0;
}

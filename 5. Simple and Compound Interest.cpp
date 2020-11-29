#include<iostream>
#include<cmath>

using namespace std;

/* To calculate the Simple Interest, Compound Interest
    And the final Amount for a given principal, rate and time */

int main()
{
    float P,R,t;
    float SI, CI;
    float SI_amt, CI_amt;
    
    cout<<endl<<"Enter the Principal Amount         : ";
    cin>>P;
    cout<<endl<<"Enter the annual rate of interest  : ";
    cin>>R;
    cout<<endl<<"Enter the time (in years)          : ";
    cin>>t;
    cout<<endl<<" ************************************************** "<<endl;
    
    SI = (P*R*t)/100;
    SI_amt = P + SI;
    CI_amt = P*(pow((1 + (R/100)),t));
    CI = CI_amt - P;
    
    cout<<endl<<"Simple Interest accrued over "<<t<<" years is           : Rs. "<<SI<<endl;
    cout<<endl<<"Final amount with Simple Interest after "<<t<<" years   : Rs. "<<SI_amt<<endl;
    cout<<endl<<"Compound Interest accrued over "<<t<<" years is         : Rs. "<<CI<<endl;
    cout<<endl<<"Final amount with Compound Interest after "<<t<<" years : Rs. "<<CI_amt<<endl;
    
    cout<<endl<<" ************************************************** "<<endl;
    
    cout<<endl<<endl;
    
    return 0;
    
}

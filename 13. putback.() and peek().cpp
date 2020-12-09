#include<iostream>

using namespace std;

int main()
{
    // with input xyz
    
    char a,b,c,d;
    cin.get(a);         // a becomes x
    cin.get(b);         // b becomes y
    c = cin.peek();     // c becomes z
    cin.get(d);         // d becomes z
    cout<<endl<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    cin.putback(a);     // x is put back
    cin.get(d);         // d becomes x
    cout<<endl<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    
    cout<<endl<<endl;
    
    return 0;
}

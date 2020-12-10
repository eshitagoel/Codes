
#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    ifstream read;
    
    read.open("maths.txt");
    
    getline(read,str);
    cout<<str<<endl<<endl;
    
    getline(read,str);
    cout<<str<<endl<<endl;
    
    read.close();
    
    return 0;
}

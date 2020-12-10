
#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int x = 10;
    
    ofstream write;
    
    write.open("maths.txt");
    
    write<<"Hi there! This is how we create and write in a file in C++.\n";
    write<<"The value of x has been initialised as : "<<x<<".";
    
    write.close();
    
    return 0;
}

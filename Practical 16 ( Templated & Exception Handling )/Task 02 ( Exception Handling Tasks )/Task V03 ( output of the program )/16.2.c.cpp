//output of the program
//16.2.c

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }
    catch (int x)
    {
        cout << "caught" << x << "\n";
    }
    return 0;
}

//11.1

#include<iostream>
using namespace std;
class A
{
public:
    void displayA()
    {
        cout << " Class A Method Called " << endl;
    }
};
class B : protected A
{

public:
    void displayB()
    {
        cout << "calling Class A method from class B method" << endl;
        displayA();
    }
};
int main()
{
    B obj;
    obj.displayB();
}

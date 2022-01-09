//16.1.b

//b.Perform add over one int and one float and return double

#include<iostream>
using namespace std;

template <typename A, typename B, typename R>
R add(A num1, B num2)
{
    R ans = num1 + num2;
    return ans;
}

int main()
{
    cout << add<int, float, double>(2, 3.5f) << endl;
    return 0;
}

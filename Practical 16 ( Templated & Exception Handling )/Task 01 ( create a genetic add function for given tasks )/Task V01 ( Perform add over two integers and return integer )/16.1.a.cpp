//16.1.a

//a. Perform add over two integers and return integer

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
   
    cout << add<int, int, int>(2, 3) << endl;
    return 0;
}
















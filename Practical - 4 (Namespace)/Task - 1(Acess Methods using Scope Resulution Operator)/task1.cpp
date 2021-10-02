/*Access these methods using scope resolution operator [::](SRO) from main method?*/

#include<iostream>
using namespace std;
namespace first{
	int add(int a, int b)
	{
		return (a+b);
	}
}
namespace second{
	float add(float a, float b)
	{
		return (a+b);
	}
}
int main()
{
	cout << "Sum of integers: " << first::add(2,3) << endl;
	cout << "Sum of float: " << second::add(2.2,3) << endl;
	
	return 0;
}

/*Try to access these methods for Mixed Values [Int, Float] and see how the compiler will react to it?*/

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

using namespace first;
using namespace second;

int main()
{
	cout << add(2,3) << endl;
	cout << add(2.2f,3) << endl;
	cout << add(0.3f,10)<< endl;
	cout << add(5.5f,4.1f)<< endl;
	return 0;
}

  


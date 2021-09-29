#include<iostream>
using namespace std;

namespace first
{
	void saysomething()
	{
		cout<<"1.. first namespace	Hello world\n";
	}
}

using namespace first;

namespace second
{
	void saysomething()
	{
		cout<<"2.. seccond namespace	Hello world\n";
	}
}


int main()
{
	//first::saysomething();
	saysomething();
	second::saysomething();

	return 0;
}

#include<iostream>
using namespace std;

namespace first
{
	int add(int x, int y)
	{
		return x+y; 
	}
}


namespace second
{
	float add(float x, float y)
	{
		return x+y; 
	}
}

//using namespace first;
using namespace second;
using namespace first;

int main()
{
	cout<<"SUM IS (namespace 1) : "<<first::add(23,90)<<endl;
	//cout<<"SUM IS (namespace 2) : "<<second::add(6.4,9.98)<<endl;
	cout<<"SUM IS (namespace 2) : "<<add(6.4,9.9)<<endl;
	
	cout<<endl<<"--------------------------------------------------";

	//cout<<"SUM IS :",saysomething(2.3,9.0)<<endl;	//error
	

	return 0;
}

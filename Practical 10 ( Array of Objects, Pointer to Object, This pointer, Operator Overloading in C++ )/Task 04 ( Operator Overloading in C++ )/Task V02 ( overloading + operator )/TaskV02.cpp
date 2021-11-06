/*WAP, in which you write a friend function to overload a less than '<' operator in C++.*/

#include<iostream>
using namespace std;

class abc
{
	private:
		int num;
	public:
	abc(int x)
	{
		this->num=x;
	}
	
	void operator +(abc obj)
	{
 		cout<<"\n"<<num+obj.num<<endl;
	}
};

int main()
{
	abc obj(10);
  	abc obj1(20);
  	obj+obj1;
  	return 0;
}

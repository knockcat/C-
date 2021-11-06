/*WAP to pass two variables in a parameterized constructor during object creation and have same names variables as class member data and constructor parameters. Your job is to calculate the remainder of those two numbers.
*/



#include<iostream>
using namespace std;

class rem
{
	private:
		int a,b;
	public:
		rem(int a,int b)
		{
  			this->a=a;
  			this->b=b;
  			cout<<"\n"<<this->a/this->b<<endl;;
		}
};

int main()
{
	rem obj(78,23);
	return 0;
}

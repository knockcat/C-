/*WAP to pass two variables in a parameterized constructor during object creation and have same names variables as class member data and constructor parameters. Your job is to calculate the remainder of those two numbers.*/

#include<iostream>
 using namespace std;
 class Member
 {
 	public:
 		void name()
 		{
 			static int a = 0;
 			a++;
 			cout << "Count for object is " << a << endl;
 		}
	
 };
 
 
 int main()
 {
 	Member a, b, c;
 	cout<<"Object 'a' ";
 	a.name();
 	cout<<"Object 'b' ";
 	b.name();
 	cout<<"Object 'c' ";
 	c.name();
 	return 0;
 }

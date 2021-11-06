/*
WAP to create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square. Use multiple constructors to for the initialization.*/

//function overloading question
#include<iostream>
#include<string>
using namespace std;
class cal_area
{
	public:
 		cal_area(int a)
		{
  			int area=4*(a)*(a);
  			cout<<"area of square"<<" "<<area<<endl;
  		}
   		cal_area(int l,int b)
  		{
  			int area=l*b;
  			cout<<"area of rectangle"<<" "<<area<<endl;
  		}
};

int main()
{
  	cal_area A1(4),A2(3,4);
  	return 0;
}

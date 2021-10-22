/*
8.7 Task: Perform Call by value, call by Address for swapping value of a and b:

int a = 10;

int b = 20;

V1. Swap(a,b); //call by Value [void swap(int a, int b){}]
*/

#include<iostream>
using namespace std;

void swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	
	swap(a,b);
	
	cout << "New value of a is: " << a <<endl;
	cout << "New value of b is: " << b << endl;
	
	return 0;
}

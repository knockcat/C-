/*Task1: How the preprocessor will react when you try to use, #include<iostream.h> instead of #include<iostream>?*/

#include<iostream.h>
using namespace std;
#define pi 3.14
int main()
{
	int area , r = 6; 
	area = pi * r* r;
	cout<<"area = "<<area;
}

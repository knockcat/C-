/*
8.2 Task: Output of this program?

V1. Issue?
*/

#include<iostream>
using namespace std;
int main()
{
	int arr[] = {10,20,30};
	
	int *p;
	p = arr;       //int *p = &arr;
	   
	cout << *p << endl;
	p++;
	cout << *p << endl;
	
	return 0;
}

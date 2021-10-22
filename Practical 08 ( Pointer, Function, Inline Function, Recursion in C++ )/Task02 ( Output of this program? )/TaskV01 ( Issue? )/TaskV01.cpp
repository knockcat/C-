/*
8.2 Task: Output of this program?
V2.How to resolve above issue?
*/

#include<iostream>
using namespace std;
int main()
{
	int arr[] = {10,20,30};
	
	int *p;
	p = &arr;
	
	
	cout << *p;
	p++;
	cout << *p;
	
	return 0;
}


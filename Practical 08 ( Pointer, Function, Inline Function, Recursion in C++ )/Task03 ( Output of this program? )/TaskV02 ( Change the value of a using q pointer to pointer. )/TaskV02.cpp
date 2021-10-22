/*
8.3 Task:
V2. Change the value of a using q pointer to pointer.
*/

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	
	int *p = &a;
	int **q = &p;
		
	cout << *p << endl;
	cout << **q << endl;
	
	**q = 20;
	
	cout << *p << endl;
	cout << **q << endl;
	
	return 0;
}
	

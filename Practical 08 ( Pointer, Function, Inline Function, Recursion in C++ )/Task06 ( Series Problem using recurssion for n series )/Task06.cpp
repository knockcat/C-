/*
8.6 Task: Series Problem using recurssion for n series

2, (2^2 + 2), (3^3 + 3), (4^4 + 4), (5^5 + 5), .......

Hint:

n * ((n-1)^(n-1) + (n-1))
*/

#include<iostream>
#include<cmath>
using namespace std;
void series(int n)
{
	if(n)
	{
	 	series(n-1);
		
	}
	else
	{
		return ;		
	}
	
	cout<<pow(n,n)+n<<",";
	
}
int main()
{
	int NUM;
	cout << "Enter value for which you want to print series: ";
	cin >> NUM;
	series(NUM);
	return 0;
}

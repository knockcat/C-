#include<iostream>
using namespace std;
bool isprime(int);

int main()
{
	int num, ans;
	cout<<"Enter Number :> ";
	cin>>num;
	ans = isprime(num);
	cout<<ans;	
	if(ans == 1)
	{
		cout<<num<<" is prime ";
	}

	else
	{
		cout<<num<<" is composite";
	}
	return 0;
}

bool isprime(int n)
{
	for ( int i = 2; i< n/2; i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true;
}

	

#include <iostream>
using namespace std;

int  sqr(int n)
{
	int ans;
	if(n==0)
		return 0;
		int start=1,end=n;
		while(start<=end)
		{
			int mid=start+(end-start)/2;
			if(mid<=n/mid)
			{
				ans=mid;
				start=start+1;
			}
			else end=mid-1;
		}
		return ans;
}
bool isPrime(int n)
{
	
	if (n <= 1)
		return false;

	
	for (int i = 2; i <= sqr(n); i++)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	isPrime(n) ? cout <<n<<" is prime" : cout <<n<<" is notprime";
    
	return 0;
}


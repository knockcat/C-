//Prime Number
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int n;
	cout<<"Enter Number :";
	cin>>n;
	/*for(int i = 2; i<sqrt(n);i++)
	{
		if(n%i == 0)
			{
				cout<<n<<" is not prime";
				return 0;
			}
	}*/

	double sqr =  sqrt(n);
	//cout<<"squareroot = "<<sqr<<endl; 
	int ind = ceil(sqr);
	//cout<<"Rounding off = "<<	ind<<endl;

	for(int  i = 2 ; i <= ind ; i++)
	{	
		if(n % i == 0)
		{
			cout<<n<<" is not prime "<<endl;
			return 0;
		}
	}
	cout<<n<<" is prime";
return 0;
}

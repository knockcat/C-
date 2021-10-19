  /*v3. Restore using reverse method [without creating new array]:*/

#include<iostream>
using namespace std;
int main()
{
	int n = 3, m = 3;
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"\nReversed Array\n\n";
	
	int res = n % 2 == 0 ? n/2 - 1 : n/2;
	for(int i = 0; i <= res; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == n-1-i && j == n-1-j)
				break;
			int temp = arr[i][j];
			arr[i][j] = arr[n-1-i][n-1-j];
			arr[n-1-i][n-1-j] = temp;
		}
	}
	
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}


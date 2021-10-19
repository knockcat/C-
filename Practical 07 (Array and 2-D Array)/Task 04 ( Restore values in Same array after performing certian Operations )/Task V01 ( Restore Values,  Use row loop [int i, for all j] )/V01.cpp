/*

Restore the same values in the same array, arr[3][3]:

	  1 2 3		1 1 1

          4 5 6     ==> 	2 2 2

	  7 8 9		3 3 3  

  v1. Use row loop [int i, for all j]
  
  */

#include <iostream>
using namespace std;

int main()
{	
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	cout << "Array is : " << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}	
	
	cout << "\nModified Array is : " << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cout << i+1 << " ";
		cout << endl;
	}		        
	return 0;
}


  //Time and date Mannually
#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	
	
	
	do{
	
		cout << "\nEnter choice you want to print: \n" << endl;
		cout << "1.Year 2.Month 3.Day" << endl;
		cin >> n;
		
		switch(n)
		{
			case 1:
				cout << "\n2021\n";
				break;
			case 2:
				cout << "\nOctober\n";
				break;
			case 3:
				cout << "\nThursday\n";
				break;
			default:
				cout << "\nInvalid choice....Enter valid data\n";
				break;
	
	
		}
		cout<<"Do you want to enter more (Y) or (N) :";
		cin>>ch;
	}while(ch == 'Y' || ch == 'y');

	return 0;
}

	

//Comparing two strings....
#include<bits/stdc++.h>
using namespace std;
void clear(void)
{
	while(getchar() != '\n');
}

int main()
{
	string s1, s2;
	cout << "Enter first string: ";
	//clear();
	getline(cin,s1);
	cout << "Enter second string: ";
	getline(cin,s2);
	
	int size1 = s1.size();
	int size2 = s2.size();
	
	if( size1 != size2)
	{
		cout << "Given Strings are not equal...." << endl;
		return 0;
	}
	for(int i = 0; i < size1; i++)
		if(s1[i] != s2[i])
		{
			cout << "Given Strings are not equal...." << endl;
			return 0;
		}
	cout << "Given Strings are equal...." << endl;	
	return 0;
}

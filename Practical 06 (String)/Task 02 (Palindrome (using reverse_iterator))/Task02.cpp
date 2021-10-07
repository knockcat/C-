//To check whether a string is Palindrome or not....
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,temp = "";
	cout << "Enter a string: ";
	getline(cin,s);
	
	string :: iterator it;
	for(it = s.begin(); it != s.end(); it++)
	{
		temp = *it + temp;
	}
	if(temp == s)
		cout << "String is Palindrome...." << endl;
	else
		cout << "String is not Palindrome...." << endl;
	return 0;
}

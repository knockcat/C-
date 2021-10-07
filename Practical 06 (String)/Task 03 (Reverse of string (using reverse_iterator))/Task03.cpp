//To reverse the string....
#include<iostream>
using namespace std;
int main()
{
	string s,rev;
	cout << "\nEnter String: ";
	getline(cin,s);
	
	string :: iterator it;
	for(it = s.begin(); it != s.end(); it++) 
	rev = *it + rev;
	
	cout << "\nReversed string is: " << rev << endl; 
	return 0;
}

//b. Istream: ws

#include<iostream>
#include<iomanip>
#include<sstream>
#include<string>
using namespace std ;
 
 int main()
 {
 
	stringstream t("  this is a string");
	string line;
	getline(t >> ws,line);
	cout << line<<endl;
 
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 

//To check the output when int + string is given....
//#include<bits/stdC++.h>  this can be used for all the libraries..
#include<iostream>

void clear(void)
{
	while(getchar() != '\n');    //To clear the buffer when system not taking string as input....
}


using namespace std;
int main()
{
	int a,b;
	float c,d;
	string s1, s2;	
	
	cout << "Enter int values: " << endl;
	cin >> a >> b;
	
	cout << "Enter float values: " << endl;
	cin >> c >> d;	
	
	cout << "Enter first string: " << endl;
	clear();
	getline(cin,s1);
	
	cout << "Enter second string: " << endl;
	getline(cin,s2);
	
	cout << "Int + Int = " << a + b << endl;
	cout << "float + float = " << c + d << endl;
	cout << "string + string = " << s1 +" "+ s2 << endl;
	
	cout << "Int + float =" << a + c << endl;
	cout << "Int + String =" << a + s1 << endl;
	return 0;
}

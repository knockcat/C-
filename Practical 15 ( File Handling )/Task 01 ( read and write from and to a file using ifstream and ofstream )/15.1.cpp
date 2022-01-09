//task 15.1
//read and write from and to a file using ifstream and ofstream.
#include<iostream>
#include<fstream>					//header for ifstream, ofstream, fstream classes
using namespace std;


int main()
{
	ofstream write;					//creation of ofstream class object for writing file
	
	string name;
	
	write.open("Sample.txt");		//opening file for writing
	
	while(write)
	{
		getline(cin,name);			//reading line from standard input
		
		if(name== "-1" )
			break;
		write << name << endl;		//writing line to file
		
	}
	write.close();					//closing file
	
	ifstream read;					//creating ifstream class object for reading the file
	
	read.open("Sample.txt");		//opening file for reading
	
	while(read)
	{
	
		getline(read,name);			//reading line from file
		cout << name << endl;
	}
	
	read.close();					//closing file
	return 0;

}


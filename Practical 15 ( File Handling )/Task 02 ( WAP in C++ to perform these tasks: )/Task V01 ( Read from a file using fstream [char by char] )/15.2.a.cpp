//15.2.a

//a. Read from a file using fstream [char by char]

#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
    fstream myfile;
    myfile.open("Sample.txt",ios::in);;
    
    if(!myfile)						//if Sample.txt doesn't exists
    {
    	cout<<"\nFile Not Exist's\n";
    	exit (0);					//program exit
    }
    
    char data;
    while(1)
    {
        myfile>>data;				//reading char by char
        if(myfile.eof())			//till we doesn't encounter end of file
        {
            break;
        }
        else cout<<data<<"_";
    }
    myfile.close();
    
    return 0;
}


//d. Count total number of characters, words and lines in a file

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream readfile;
	readfile.open("file.txt",ios::in);
	string s;//will help to count no of lines
	char ch;
	int count_l=0;
	int count_w=0;
	int count_c=0;
   while(getline(readfile,s))
   {
       count_l++;
   }
   cout<<"total no of lines in file.txt==>"<<count_l<<endl;//total no of lines in file.txt	
    readfile.close();
    readfile.open("file.txt",ios::in);
    while(getline(readfile,s,' '))
   {
       count_w++;
   }
   cout<<"total no of words in file.txt==>"<<count_w+1<<endl;//total no of words in file.txt
   readfile.close();
   readfile.open("file.txt",ios::in);
   while(1)
   {
       readfile>>ch;
       if(ch==' ')
       continue;
       if(readfile.eof())
       break;
       else
       count_c++;
   }
   cout<<"total no of words in file.txt==>"<<count_c<<endl;
}

//15.3

//b. Write into a file using fstream

#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main()
{
    fstream myfile;							//creating object of fstream class
    myfile.open("myfile.txt",ios::out);;	//opening file in write mode
    
    if(!myfile)								//if file not created
    {
        cout<<"file not created"<<endl;
    }
    
    else 
    {
        cout<<"file is created"<<endl;		//if file created
        myfile<<"file is diplaying"<<endl;	//writing to a file
    }
    
    myfile.close();							//closing file
    return 0;
}


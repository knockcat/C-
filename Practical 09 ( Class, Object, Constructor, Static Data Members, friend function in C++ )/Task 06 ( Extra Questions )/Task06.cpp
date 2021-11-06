/*WAP which would perform these tasks of your data:
a. Come to next line
b. set minimum field width
c. fill string with (*) after setw(15) function
    **********1234
by using endl, setw, and setfill [Manipulators in C++] */

#include<iostream>
#include<iomanip>
#include<ios>
using namespace std;

int main()
{
   cout<<"enter our choice"<<endl;
   cout<<"1.come to next line 2.setting  field with 3.fill string with * after setw(15) function" <<endl;
   int n;

   long str=123456789;
   cout<<"before before any operation "<<str;
   while(1)
   {
    cin>>n;
   switch(n)
   {
   case 1 : 
   cout<<"before going to next line "<<str;
   cout<<endl;
   cout<<str;
   break;
   case 2: 
   cout<<"after setting field width"<<str<<endl;
   cout<<setw(15);
   cout<<str;
   break;
   case 3:
   cout<<"before setfill "<<str<<endl;
   cout<<setfill('*')<<setw(15);
   cout<<str;
   break;
   default : return 0;
   }
   }
}

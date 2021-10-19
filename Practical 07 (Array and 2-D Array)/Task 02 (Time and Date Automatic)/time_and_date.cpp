/*Create a switch statement [Using ctime]*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t curtime;
	
	time(&curtime);
    int choice;
    cout << "1. Print current year." << endl;
    cout << "2. Print current month." << endl;
    cout << "3. Print current day." << endl;
    cout << "4. Print current Time." << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    
    string day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    string month[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    time_t res = time(0);
    struct tm *t = localtime(&res);   
 
    switch(choice)
    {
    	case 1:     cout << "Current year is " << t->tm_year + 1900 << endl;
		    break;
    	
    	case 2:     cout << "Current month is " << month[t->tm_mon] << endl;
		    break;
		
	case 3:	   
		    cout << "Current day is " << day[t->tm_wday] << endl;
		    break;
		   
	case 4:
		    printf("Current time = %s", ctime(&curtime));
		    break;
		
	default:    cout << "Invalid Input !!!" << endl;
	break;
    }        
	return 0;
}

/*How to resolve above issue? [Hint: by using, getline(cin, line);]*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str;
 
    cout << "Please enter your name: \n";
    getline(cin, str);
    cout << "Hello, " << str;
         
 
    return 0;
}

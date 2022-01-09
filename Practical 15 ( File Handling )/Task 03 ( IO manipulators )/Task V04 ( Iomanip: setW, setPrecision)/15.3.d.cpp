//d. Iomanip: setW, setPrecision

#include<iomanip>
#include <iostream>
using namespace std;

int main()
{
   int num = 45;
  cout << "it is: " << fixed << setprecision(2) << num << " the end"<< endl;		//setprecission
  
  int i = 18;
  cout<<setw(10)<<i;			//setw
  
  return 0;
}

























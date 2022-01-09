//1. Insert elements into a int vector

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;


int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of the vector \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);			//inserting elements in vector
    }
    
    
    
    return 0;
}












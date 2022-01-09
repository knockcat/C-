//2. Find size of a list

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// function for printing the elements in a list
void printList(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
int main()
{
    list<int> l;
    int n;
    cout << "Enter the size of the List \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        l.push_back(ele);
    }
    printList(l);
    
    cout << "Size of the list is : " << l.size() << "\n";
    
    return 0;
}




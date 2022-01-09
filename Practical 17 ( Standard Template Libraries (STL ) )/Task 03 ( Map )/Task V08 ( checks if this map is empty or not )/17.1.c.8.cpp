//8. checks if this map is empty or not

#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;

// function for printing the elements in a map
void printmap(map<int, string> v)
{
    map<int, string>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << it->first << " " << it->second << "\n";
    cout << '\n';
}

int main()
{
    map<int, string> m;
    // Inserting Elements in map

    m.insert(pair<int, string>(6, "Map"));
    m.insert(pair<int, string>(3, "Iterator"));
    m.insert(pair<int, string>(8, "pair"));
    m.insert(pair<int, string>(1, "coders"));
    m.insert(pair<int, string>(9, "algorithm"));
    m.insert(pair<int, string>(2, "begin"));
    m.insert(pair<int, string>(5, "end"));
    
    // printing map
    printmap(m);

	// Checking a map is empty or not
    cout << "Checking map is empty or not after :\n";
    if (m.empty())
        cout << "Map is empty\n";
    else
        cout << "Map is not empty\n";
        
    return 0;
}










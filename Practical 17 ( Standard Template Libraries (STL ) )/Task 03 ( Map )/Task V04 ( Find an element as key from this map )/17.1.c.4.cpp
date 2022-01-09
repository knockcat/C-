//4. Find an element as key from this map

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
    
    // Find an element as key from this map
    auto itr = m.find(9);
    cout << "itr is poiting to \n"
         << itr->first << " " << itr->second << " \n";

    return 0;
}










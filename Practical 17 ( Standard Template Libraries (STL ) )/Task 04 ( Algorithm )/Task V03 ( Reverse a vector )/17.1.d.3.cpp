//3. Reverse a vector

#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}


int main()
{
    // creating a vector
    
    vector<int> vec{2, 7, 5, 1, 8, 3, 3, 4};
    
    cout << "Printing vector after Reversing : \n";
    
    printvector(vec);
    
    // Reversing a vector
    
    reverse(vec.begin(), vec.end());
    
    cout << "Printing vector after Reversing : \n";
    
    printvector(vec);
    
    
    return 0;
}




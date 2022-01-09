//6. Occurrences of x in vector


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
    // creating an vecotr
    vector<int> vec {2, 7, 5, 1, 8, 3, 3, 4};
    
    cout<<"\n\nElements in Vector\n\n";
    printvector(vec);
    
    // counting  occurrence of an element
    cout << "occurrence of an 3 in vector :" << count(vec.begin(), vec.end(), 3) << endl;
    
    return 0;
}












//4. Max element in a Vector

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
    
    cout<<"\n\nElements in Vector\n\n";
    printvector(vec);
    
    cout << "Printing max and min element of vector : \n";
    cout << "Max element is : " << *(max_element(vec.begin(), vec.end())) ;
    
    return 0;
}




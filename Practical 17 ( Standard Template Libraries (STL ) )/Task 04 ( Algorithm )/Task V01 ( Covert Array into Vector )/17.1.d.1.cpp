//1. Covert Array into Vector

#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << '\n';
}
int main()
{
    // creating a Array
    int arr[] = {2, 7, 5, 1, 8, 3, 3, 4};
    
    // Converting a array into vector
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr + n);
    
    cout<<"\n\nElements in Array\n\n";
    printArray(arr,n);
    
    cout<<"\n\nElements in Vector\n\n";
    printvector(vec);
    
    return 0;
}




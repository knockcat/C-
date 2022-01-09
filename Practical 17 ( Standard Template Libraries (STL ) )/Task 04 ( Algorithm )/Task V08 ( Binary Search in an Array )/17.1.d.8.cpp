//8. Binary Search in an Array

#include <bits/stdc++.h>
using namespace std;


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
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"\n\nElements in Array\n\n";
    printArray(arr,n);
    
    cout << "Using Binary Search for finding 50 in an Array : \n ";
    
    if (binary_search(arr, arr + n, 50))
    {
        cout << "50 Exist in the Array \n";
    }
    else
    {
        cout << "50 Doesn't Exist in the Array\n";
    }
    
    
    return 0;
}




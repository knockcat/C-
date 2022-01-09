//7. Sort an Array

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
    
    cout<<"\n\nElements in Array before Sorting\n\n";
    printArray(arr,n);
    
    sort(arr, arr + n);
    
    cout<<"\n\nElements in Array after Sorting\n\n";
    printArray(arr,n);
    
    return 0;
}





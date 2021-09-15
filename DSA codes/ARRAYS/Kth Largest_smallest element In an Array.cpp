#include <algorithm>
#include <iostream>
using namespace std;
int kthSmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k -1];
}
int kthLargest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[n-k];
}
 

int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << kthSmallest(arr, n, k)<<endl;
    cout << kthLargest(arr, n, k);
    return 0;
}

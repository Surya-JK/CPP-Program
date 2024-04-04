#include <iostream>
using namespace std;
int Missing(int arr[], int n) 
{
    int i = 0;
    while (i < n && arr[i] <= i) 
	{
        i++;
    }
    return i;
}
int main() 
{
    int arr[] = {0, 1, 2, 3, 4, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing =Missing(arr, n);
    cout << "Smallest missing element in the sorted array is: " << missing <<endl;
    return 0;
}

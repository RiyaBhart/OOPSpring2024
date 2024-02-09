// NAME : RIYA BHART
// ROLL ID: 23K-0063

#include <iostream>
using namespace std;

bool hasSubsetSum(int arr[], int size, int targetsum)
{
    if (targetsum == 0)
    { // because 0 is always a subset of every set
        return true;
    }
    if (size == 0)
    { // if size == 0 then obviously there would be no any integers in the array
        return false;
    }
    if (arr[size - 1] > targetsum)
    {
        return hasSubsetSum(arr, size - 1, targetsum);
    }
    return hasSubsetSum(arr, size - 1, targetsum) || hasSubsetSum(arr, size - 1, targetsum - arr[size - 1]);
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetsum;
    cout << "Enter target sum" << endl;
    cin >> targetsum;

    if (hasSubsetSum(arr, size, targetsum))
    {
        cout << "Subset with sum " << targetsum << " exists.\n";
    }
    else
    {
        cout << "No subset with sum " << targetsum << " exists.\n";
    }
    return 0;
}

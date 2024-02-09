#include <iostream>
using namespace std;
int maxArea(int arr[], int n)
{
    int maxWater = 0;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int h = min(arr[left], arr[right]);
        int w = right - left;
        int area = h * w;

        maxWater = max(maxWater, area);

        if (arr[left] < arr[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return maxWater;
}

int main()
{
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = maxArea(arr, n);
    cout<<"The maximum area is : "<<result ;
    return 0;
}

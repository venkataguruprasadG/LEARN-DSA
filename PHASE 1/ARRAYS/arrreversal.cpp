#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int low = 0;
    int high = size - 1;

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    reverseArray(arr, size);

    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}
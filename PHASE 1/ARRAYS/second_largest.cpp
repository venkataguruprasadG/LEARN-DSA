#include <iostream>
using namespace std;

int findSecondLargest(const int arr[], int size)
{
    if (size < 2)
    {
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        int current = arr[i];

        if (current > largest)
        {
            secondLargest = largest;
            largest = current;
        }
        else if (current > secondLargest && current < largest)
        {
            secondLargest = current;
        }
    }

    if (secondLargest == INT_MIN)
    {
        return -1;
    }

    return secondLargest;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = 6;
    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != -1)
    {
        cout << "the second Largest element in the array is: " << secondLargest << endl;
    }
    else
    {
        cout << "The array does not have a second largest element." << endl;
    }
    return 0;
}
#include <iostream>
#include <array>
using namespace std;

int findMax(int arr[], int size)
{
    if (size <= 0)
    {
        cout << "The array is empty ";
        return -1;
    }

    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int size = 5;

    int max = findMax(array, size);
    cout << "Maximum element: " << max << endl;
}
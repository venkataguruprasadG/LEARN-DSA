#include <iostream>
using namespace std;

int countElement(const int arr[], int size, int target)
{
    int countnum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            countnum++;
        }
    }
    return countnum;
}

int main()
{
    int arr[] = {4, 2, 7, 2, 9, 2};
    int size = 6;
    int target = 2;
    int count = countElement(arr, size, target);
    cout << "Number of elements in the array: " << count << endl;
}
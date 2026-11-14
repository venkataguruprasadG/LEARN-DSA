#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {12, 13, 45, 67, 89};

    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
}
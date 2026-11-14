#include <iostream>
#include <vector>
using namespace std;

long long findProfit(const vector<long long> &arr)
{
    if (arr.size() < 2)
    {
        return -1;
    }

    long long minPrice = arr[0];
    long long maxProfit = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        maxProfit = max(maxProfit, arr[i] - minPrice);
        minPrice = min(minPrice, arr[i]);
    }
    if (maxProfit <= 0)
    {
        maxProfit = -1;
        return maxProfit;
    }

    return maxProfit;
}

int main()
{

    int size;
    cin >> size;

    vector<long long> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    long long profit = findProfit(arr);
    cout << profit << endl;
    return 0;
}
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> scores = {10, 20, 30, 40, 50};

    cout << "Item at index 0: " << scores[0] << endl;
    cout << "Item at index 3: " << scores[3] << endl;

    scores[1] = 99;

    cout << "Total elements: " << scores.size() << endl;

    cout << "All elements: ";
    for (int i = 0; i < scores.size(); i++)
    {
        cout << scores[i] << " ";
    }
    cout << "\n";
    return 0;
}
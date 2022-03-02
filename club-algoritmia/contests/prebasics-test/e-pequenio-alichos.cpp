#include "iostream"
#include "vector"
#include <algorithm>
using namespace std;

void swapNumbers(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

bool movementChecker(vector<int> numbers)
{
    int swaps = 0;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = 0; j < (numbers.size() - 1) - i; j++)
        {
            if (numbers.at(j) > numbers.at(j + 1))
            {
                swaps++;

                swapNumbers(&numbers[j], &numbers[j + 1]);
                if (swaps > 1)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    int temp;
    vector<int> numbers;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        numbers.push_back(temp);
    }

    bool isLessThanTwoMovements = movementChecker(numbers);

    if (isLessThanTwoMovements)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

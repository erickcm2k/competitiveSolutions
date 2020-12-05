#include "iostream"
#include "vector"
using namespace std;

bool canHaveOddSum(vector<int> testCase)
{
    int evenCounter = 0;
    int oddCounter = 0;
    int accumulate = 0;
    int testSize = testCase.size();

    for (int i = 0; i < testCase.size(); i++)
    {
        if (testCase[i] % 2 == 0)
        {
            evenCounter++;
        }
        else
        {
            oddCounter++;
        }
        accumulate += testCase[i];
    }

    if (accumulate % 2 == 1)
    {
        return true;
    }
    else
    {
        if (oddCounter == testSize && testSize % 2 == 1)
        {
            return true;
        }

        if (evenCounter == testSize)
        {
            return false;
        }

        if (oddCounter % 2 == 0 && evenCounter > 0)
        {
            return false;
        }

        if (oddCounter % 2 == 1 && evenCounter > 0)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{

    int t, n;
    int num;
    cin >> t;
    vector<int> testCase[t];

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            testCase[j].push_back(num);
        }
    }

    for (int i = 0; i < t; i++)
    {
        bool ans = canHaveOddSum(testCase[i]);
        if (ans == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

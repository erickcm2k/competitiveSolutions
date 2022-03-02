#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
    string wordToFind = "hello";
    int matchCounter = 0;
    string test;

    cin >> test;

    for (int i = 0; i < test.length(); i++)
    {
        if (test[i] == wordToFind[matchCounter])
        {
            ++matchCounter;
        }

        if (matchCounter == wordToFind.length())
        {
            break;
        }
    }

    if (matchCounter == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
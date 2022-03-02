#include "iostream"
#include "list"
#include <algorithm>
using namespace std;

bool existsOnStack(int toFind, list<int> myStack)
{

    for (auto e : myStack)
    {
        if (e == toFind)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{

    int n, k;
    int messagesOnDisplay = 0;
    int temp;
    list<int> myStack;
    cin >> n;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        if (!existsOnStack(temp, myStack))
        {
            myStack.push_front(temp);
            if (myStack.size() > k)
            {
                myStack.pop_back();
            }
        }
    }

    cout << myStack.size() << endl;
    for (auto e : myStack)
    {
        cout << e << " ";
    }

    return 0;
}

#include "iostream"
using namespace std;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int buildings[n];
    int jumpDistance = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> buildings[i];
    }

    for (int i = 0; i < n; i++)
    {
        jumpDistance = 0;
        for (int j = i; j < n; j++)
        {
            if (buildings[i] >= buildings[j + 1])
            {
                jumpDistance++;
            }
            else
            {
                cout << jumpDistance << " ";
                break;
            }
        }
    }

    return 0;
}

#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{

    int N, X;
    string answerString;

    cin >> N;
    cin >> X;
    cin >> answerString;

    for (int i = 0; i < N; i++)
    {
        if (answerString.at(i) == 'o')
        {
            X++;
        }
        else if (answerString.at(i) == 'x' and X != 0)
        {
            X--;
        }
    }

    cout << X;

    return 0;
}

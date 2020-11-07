#include "iostream"
using namespace std;

char findNextChar(char toFind, char direction)
{
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < keys.length(); i++)
    {
        if (toFind == keys.at(i))
        {
            if (direction == 'L')
            {
                if (toFind == '/')
                {
                    return '/';
                }
                return keys.at(i + 1);
            }
            else
            {
                if (toFind == 'q')
                {
                    return 'q';
                }
                return keys.at(i - 1);
            }
        }
    }
    return ' ';
}

int main(int argc, char const *argv[])
{

    string word, newWord;
    char direction;

    cin >> direction;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        char currentChar = word.at(i);
        newWord += findNextChar(currentChar, direction);
    }

    cout << newWord;
    return 0;
}

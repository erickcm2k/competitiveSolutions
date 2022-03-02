#include "iostream"
using namespace std;

class Node
{
public:
    int value;
    Node *left, right;
    Node(int x)
    {
        value = x;
        next = NULL, right = NULL;
    }
};

class BST
{
    int elems = 0;
    int height = 0;
    Node *root = NULL;

public:
    void insert(int value)
    {
        Node newNode(value);
    };
};

int main(int argc, char const *argv[])
{

    return 0;
}

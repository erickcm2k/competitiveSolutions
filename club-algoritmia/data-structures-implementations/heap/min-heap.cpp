#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MaxHeap
{
public:
    vector<int> A;
    int size = 0;

    void push(int value)
    {
        A.push_back(value);
        int i = A.size() - 1;

        while (i != 0 && A[parentIndex(i)] > A[i])
        {
            swap(A[parentIndex(i)], A[i]);
            i = parentIndex(i);
        }
        size++;
    }

    void pop()
    {
        if (size <= 0)
            return;
        if (size == 1)
        {
            size--;
            A.pop_back();
        }
        size--;
        swap(A[0], A[size]);
        A.pop_back();
        heapify(0);
    }

    int getTop() { return A.front(); }

    vector<int> getHeap() { return A; }

    // Auxiliary functions
    int parentIndex(int i)
    {
        return (i - 1) / 2;
    }
    int leftSonIndex(int i) { return (i * 2) + 1; }
    int rightSonIndex(int i) { return (i * 2) + 2; }

    void heapify(int i)
    {
        int l = leftSonIndex(i);
        int r = rightSonIndex(i);
        int largest = i;
        if (l < A.size() && A[l] < A[i])
            largest = l;
        if (r < A.size() && A[r] < A[largest])
            largest = r;
        if (largest != i)
        {
            swap(A[i], A[largest]);
            heapify(largest);
        }
    }
};

int main(int argc, char const *argv[])
{

    int heapSize, val;
    MaxHeap myHeap;
    cin >> heapSize;

    for (int i = 0; i < heapSize; i++)
    {
        cin >> val;
        myHeap.push(val);
    }

    for (auto num : myHeap.getHeap())
    {
        cout << num << " ";
    }
    cout << endl;

    myHeap.pop();

    return 0;
}
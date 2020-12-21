#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MinHeap
{
public:
    vector<int> A;
    int size = 0;

    void push(int value)
    {
        A.push_back(value);
        int i = A.size() - 1;

        /* .
            Ensures that the new value is greater or equal
            than its parent's value, moving it from the last
            position to its corresponding position.
        */
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

        /*
            If size is > 1, this section will ensure that
            the array is still a min-heap.
        */

        A.pop_back();
        size--;
        swap(A[0], A[size]);
        minHeapify(0);
    }

    int getTop() { return A.front(); }

    vector<int> getHeap() { return A; }

    void printHeap()
    {
        for (auto num : A)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    // Auxiliary functions
private:
    int parentIndex(int i) { return (i - 1) / 2; }
    int leftSonIndex(int i) { return (i * 2) + 1; }
    int rightSonIndex(int i) { return (i * 2) + 2; }

    void minHeapify(int i)
    {
        int l = leftSonIndex(i);
        int r = rightSonIndex(i);
        int largest = i;
        if (l < A.size() && A[l] < A[i])
            largest = l;
        if (r < A.size() && A[r] < A[largest])
            largest = r;
        // In case that given node is smaller
        // than their sons.
        if (largest != i)
        {
            swap(A[i], A[largest]);
            minHeapify(largest);
        }
    }
};

int main(int argc, char const *argv[])
{

    int n, val;
    MinHeap myHeap;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        myHeap.push(val);
    }

    myHeap.printHeap();

    return 0;
}
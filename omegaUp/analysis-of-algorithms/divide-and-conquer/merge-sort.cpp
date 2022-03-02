#include "iostream"

using namespace std;

void merge(int *A, int lb, int m, int ub)
{
    int n1 = m - lb + 1;
    int n2 = ub - m;

    // Create temp arrays
    int firstHalf[n1], secondHalf[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        firstHalf[i] = A[lb + i];
    for (int j = 0; j < n2; j++)
        secondHalf[j] = A[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = lb;

    while (i < n1 && j < n2)
    {
        if (firstHalf[i] <= secondHalf[j])
        {
            A[k] = firstHalf[i];
            i++;
        }
        else
        {
            A[k] = secondHalf[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1)
    {
        A[k] = firstHalf[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2)
    {
        A[k] = secondHalf[j];
        j++;
        k++;
    }
}

void ms(int *A, int lb, int ub)
{
    if (lb < ub) // If lb < lb, then the array can be divided
    {
        int mid = (lb + ub) / 2;
        ms(A, lb, mid);         // MS first half
        ms(A, mid + 1, ub);     // MS second half
        merge(A, lb, mid, ub); // Merge two halves
    }
}

void printMergeSort(int *A, int size)
{
    int lb = 0;
    int ub = size - 1;

    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";

    ms(A, lb, ub);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main()
{

    int A[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(A) / sizeof(A[0]);
    printMergeSort(A, size);
    return 0;
}

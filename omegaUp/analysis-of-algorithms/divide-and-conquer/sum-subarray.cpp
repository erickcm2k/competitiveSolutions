#include <iostream>
#include <algorithm> //max
using namespace std;

// A utility funtion to find maximum of three integers
int max(int a, int b, int c) { return max(max(a, b), c); }

// Find the maximum possible sum in arr[] auch that arr[m] is part of it
int maxCrossingSum(int A[], int l, int m, int h)
{
    // Include elements on left of mid.
    int sum = 0;
    int left_sum = 0;
    for (int i = m; i >= l; i--)
    {
        sum = sum + A[i];
        if (sum > left_sum)
            left_sum = sum;
    }

    // Include elements on right of mid
    sum = 0;
    int right_sum = 0;
    for (int i = m + 1; i <= h; i++)
    {
        sum = sum + A[i];
        if (sum > right_sum)
            right_sum = sum;
    }

    // Return sum of elements on left and right of mid
    // returning only left_sum + right_sum will fail for [-2, 1]
    return max(left_sum + right_sum, left_sum, right_sum);
}

// Returns sum of maxium sum subarray in aa[l..h]
int maxSubArraySum(int A[], int l, int h)
{
    // Base Case: Only one element
    if (l == h)
        return A[l];

    // Find middle point
    int m = (l + h) / 2;

    /* Return maximum of following three possible cases 
      a) Maximum subarray sum in left half 
      b) Maximum subarray sum in right half 
      c) Maximum subarray sum such that the subarray crosses the midpoint */
    return max(maxSubArraySum(A, l, m),
               maxSubArraySum(A, m + 1, h),
               maxCrossingSum(A, l, m, h));
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int A[] = {-2, -5, 6, -2, -3, 1, 5, -6};

    int n = sizeof(A) / sizeof(A[0]);
    int max_sum = maxSubArraySum(A, 0, n - 1);
    cout << "Maximum contiguous sum is: " << max_sum;

    return 0;
}
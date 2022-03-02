#include "iostream"
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 3, 4};

    do
    {
        cout << nums[0] << ' ' << nums[1] << ' ' << nums[2] << ' ' << nums[3] << '\n';
    } while (next_permutation(nums, nums + 4));
    return 0;
}

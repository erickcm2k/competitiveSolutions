class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive = 0;
        int temp = 0;
        for(int i = 0;i < nums.size(); i++) {
            if (nums[i] == 1) {
                temp++;
                if(temp > maxConsecutive) {
                    maxConsecutive = temp;
                }
            } else {
                temp = 0;
            }
        }
        return maxConsecutive;
    }
};
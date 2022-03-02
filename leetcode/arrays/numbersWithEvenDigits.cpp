class Solution {
public:
    
    bool hasEvenDigits(int num) {
        int counter = 0;
        while(num) {
            num /= 10;
            counter++;
        }
        return counter % 2 == 0;
    }
    
    int findNumbers(vector<int>& nums) {
        int oddDigitCount = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(hasEvenDigits(nums[i]))
                oddDigitCount++;
        }
        return oddDigitCount;
    }
};
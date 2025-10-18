class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // Case 1: if 0 is missing
        if (nums[0] != 0) return 0;

        // Case 2: find the missing number in the middle
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] != nums[i] + 1) {
                return nums[i] + 1;
            }
        }

        // Case 3: if last number (n) is missing
        return n;
    }
};

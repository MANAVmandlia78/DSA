class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;  // assume the smallest element is at position i

            // find the index of the smallest element in the remaining array
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }

            // swap the found minimum element with the first unsorted element
            if (minIndex != i) {
                swap(nums[i], nums[minIndex]);
            }
        }
    }
};
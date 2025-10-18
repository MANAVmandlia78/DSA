class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // handle k > n
        
        vector<int> temp;
        
        // store last k elements
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // shift remaining elements to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        // put saved elements at the front
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};

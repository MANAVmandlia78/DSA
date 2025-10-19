class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        int len = 0;
        unordered_map<int, int> prefixSum; // stores {sum, first_index_of_sum}

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            // ✅ Case 1: If subarray from 0...i itself equals k
            if (sum == k)
                len = i + 1;

            // ✅ Case 2: If (sum - k) seen before → subarray from that index+1 to i has sum k
            if (prefixSum.find(sum - k) != prefixSum.end()) {
                len = max(len, i - prefixSum[sum - k]);
            }

            // ✅ Store first occurrence of this sum
            if (prefixSum.find(sum) == prefixSum.end()) {
                prefixSum[sum] = i;
            }
        }

        return len;
    }
};

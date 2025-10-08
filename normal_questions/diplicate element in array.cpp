#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int,int>> countFreq(vector<int>& arr) {
        map<int, int> mpp;

        // Count frequencies
        for (int i = 0; i < arr.size(); i++) {
            mpp[arr[i]]++;
        }

        // Store results in vector of pairs
        vector<pair<int,int>> result;
        for (auto it : mpp) {
            result.push_back({it.first, it.second});
        }

        return result;
    }
};

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 5};
    Solution obj;
    vector<pair<int,int>> ans = obj.countFreq(arr);

    for (auto p : ans) {
        cout << "[" << p.first << ", " << p.second << "] ";
    }
    cout << endl;
}

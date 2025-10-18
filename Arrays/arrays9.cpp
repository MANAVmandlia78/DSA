class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> inter;
        int i = 0, j = 0;
        int n1 = a.size(), n2 = b.size();

        while (i < n1 && j < n2) {
            if (a[i] == b[j]) {
                if (inter.empty() || inter.back() != a[i]) {
                    inter.push_back(a[i]);
                }
                i++;
                j++;
            }
            else if (a[i] < b[j]) i++;
            else j++;
        }
        return inter;
    }
};

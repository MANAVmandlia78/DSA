class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;
        long long sum = 0;
        while (n != 0) {
            int last = n % 10;
            sum += last * last * last;  // just add cube, no *10
            n /= 10;
        }
        return sum == original;
    }
};

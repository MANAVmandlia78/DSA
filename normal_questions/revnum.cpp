class Solution {
  public:
    int reverseDigits(int n) {
        int rev = 0;
        // Code here
        while(n>0){
        int last = n%10;
        rev = last + rev*10;
        n=n/10;
     }
    return rev; 
    }
};
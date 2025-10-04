// Count all Digits of a Number
// You are given an integer n. You need to return the number of digits in the number.
// The number will have no leading zeroes, except when the number is 0 itself.

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
     while(n>0){
        n=n/10;
        count++;
     }
     return count;
    }
};
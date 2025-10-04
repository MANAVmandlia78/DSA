class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long long rev = 0;
        while(x!=0){
            int last = x%10;
            rev= rev*10+last;
            x=x/10;
        }
        if(rev<0){
            return false;
        }else if(rev==original){
           return true;
        }else{
            return false;
        }
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x %10==0 && x!=0))
        {
            return false;
        }
        int re_num = 0;
        while ( x > re_num)
        {
            re_num=re_num * 10 + x % 10;
            x/=10;
        }
        return x == re_num || x == re_num / 10;
    }
};
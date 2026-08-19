class Solution {
public:
    bool isPalindrome(int x) {
        int xev =x;
        if(x<0) return false;
        long long rev=0;
        int digit=0;
        while(xev!=0){
            digit= xev%10;

            rev= rev*10 +digit;
            xev =xev/10;
        }

        if(x==rev) return true;
        else return false;
    }
};
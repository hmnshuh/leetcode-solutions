class Solution {
public:
    int digitFrequencyScore(int n) {
        int num =n;
        int f_num=0;
         while(num>0){
         int digit = num%10;
         f_num = f_num + digit;
         num = num/10;




         }
         return f_num;
    }
};
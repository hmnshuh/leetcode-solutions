class Solution {
public:
    int scoreOfString(string s) {
        int i=0,j=i+1;
        int sum=0;
        while(i<s.length()-1){
            sum+=abs(int(s[i])-int(s[j]));
            i++;
            j++;
        }
        return sum;
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int pointer_1 =0;
        int pointer_2=0;

        while(pointer_1<=word1.length()-1 && pointer_2<=word2.length()-1){
            ans+=word1[pointer_1];
            ans+=word2[pointer_2];

            pointer_1++;
            pointer_2++;

        }

        if(pointer_1<=word1.length()-1){
            while(pointer_1<=word1.length()-1){
                ans+=word1[pointer_1];
                pointer_1++;
            }

        }

         if(pointer_2<=word2.length()-1){
            while(pointer_2<=word2.length()-1){
                ans+=word2[pointer_2];
                pointer_2++;
            }

        }
        return ans;
    }
};
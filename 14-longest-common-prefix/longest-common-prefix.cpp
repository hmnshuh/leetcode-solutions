class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {

        string ans = "";
      
    

        for(int j=0;j<s[0].length();j++){
            for(int i=0;i<s.size();i++){
                if(s[i][j]!= s[0][j]) return ans;
               
            }
            ans+=s[0][j];
        
        }

        
        return ans;
    }
};
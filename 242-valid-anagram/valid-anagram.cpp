class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> m;
        unordered_map<char,int> p;

        for(char val: s){
            m[val]++;
        }

         for(char val: t){
            p[val]++;
        }

        if(m==p) return true;
        else return false;
        
    }
};
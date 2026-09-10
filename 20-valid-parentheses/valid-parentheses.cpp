class Solution {
public:
    bool isValid(string s) {
        vector<char> ch;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                ch.push_back(s[i]);}
            else if(s[i]==')'){
                if( ch.empty()||ch.back()!='(') return false;
                 ch.pop_back();
            }
            else if(s[i]==']'){
                if(ch.empty() || ch.back()!='[') return false;
                ch.pop_back();
            }

            else if(s[i]=='}'){
                if(ch.empty() || ch.back()!='{') return false;
                ch.pop_back();
            }
            else return false;
            }
            if(!ch.empty()) return false;

        return true;
        
    }
};
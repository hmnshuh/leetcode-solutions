class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int n1 = s1.size();
        int n2 = s2.size();

        vector<int> ans1(26, 0);
        vector<int> ans2(26, 0);
        if(n1 > n2) return false;


        for(int i = 0; i < n1; i++){
            ans1[s1[i] - 'a']++;
        }

        for(int i = 0; i < n1; i++){
            ans2[s2[i] - 'a']++;
        }
        if(ans1 == ans2) return true;
        int low = 0;
       int high = n1-1;


while(high < n2-1){
    low++;
    high++;
    ans2[s2[high] - 'a']++;
    ans2[s2[low-1] - 'a']--;
    

    if(ans1 == ans2) return true;
}

        

        return false;
    }
};
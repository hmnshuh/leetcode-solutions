class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1;
        unordered_set<int> s2;
        vector<int> v;


        for(int i=0;i<nums1.size();i++){
            
            s1.insert(nums1[i]);
        }


        for(int i=0;i<nums2.size();i++){
            if(s1.count(nums2[i]) && !s2.count(nums2[i])){
            s2.insert(nums2[i]);
            v.push_back(nums2[i]);
            }

        }


return v;
        
    }
};
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> seen;
        int sum=0;
        int i=0;
        int j=i+1;
        while(j<=nums.size()-1){
           sum= nums[i]+nums[j];

           if(seen.count(sum)) return true;

           seen.insert(sum);
           i++;
           j++;
        }
        return false;
    }
};
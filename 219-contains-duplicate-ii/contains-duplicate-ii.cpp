class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int num =INT_MAX;
        if(nums.size()<2) return false;
        for(int i=0;i<nums.size();i++){
                if(mp.count(nums[i])){
                  num =  (i-mp[nums[i]]);}

                  if(num<=k) return true;

                mp[nums[i]]=i;
            
        }
       

         return false;
        
    }
};
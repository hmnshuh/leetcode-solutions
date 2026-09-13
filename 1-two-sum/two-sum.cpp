class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        // vector<int> indices;

        for(int i=0;i<nums.size();i++){
           int needed = target-nums[i];

            if(seen.count(needed)){

                return {seen[needed],i};
                // indices.push_back(i);
                // indices.push_back(seen[needed]);
            }

            seen[nums[i]]=i;

        }
        return {};
    }
};
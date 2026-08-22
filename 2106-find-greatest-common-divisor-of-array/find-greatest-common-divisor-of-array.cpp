class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest =INT_MAX;
        int greatest = INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>greatest) greatest =nums[i];
            if(nums[i]<smallest) smallest =nums[i];
        }

        return gcd(greatest,smallest);

            
    }
};
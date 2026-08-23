class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=0;
        int i_piv=-1;
        int i_swap=-1;
        int Swap=0;

        for(int i =nums.size()-1; i>0;i--){

            if(nums[i-1]<nums[i]){
                pivot = nums[i-1];
                i_piv = i-1;
                break;
            }
        }
        if(i_piv== -1){ reverse(nums.begin(),nums.end());
        return;
        
        }
        for(int i=nums.size()-1;i>i_piv;i--){
            if(nums[i]>pivot){
                Swap =nums[i];
                i_swap =i;
                break;
            }
            
            }
        

        swap(nums[i_swap],nums[i_piv]);

        reverse(nums.begin()+i_piv+1,nums.end());

        
    }
};
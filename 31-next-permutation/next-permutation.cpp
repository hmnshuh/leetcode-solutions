class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int pivot=0;
        int index=-1;
        int to_swap=INT_MAX;
        int index2 =0;

        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){ pivot=nums[i-1];
            index =i-1;  
            break;          }
        }
        if(index==-1){ reverse(nums.begin(),nums.end());
        return;
        };


        for(int i=nums.size()-1;i>index;i--){
            if(nums[i]<to_swap && nums[i]>pivot) {to_swap = nums[i];
            index2= i;
            };
        }

        swap(nums[index],nums[index2]);
         reverse(nums.begin()+index+1 ,nums.end());
    }
};
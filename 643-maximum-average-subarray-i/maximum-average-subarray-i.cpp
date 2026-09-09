class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        double maxAvg=0;
        double avg=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];

        }
        maxAvg=sum/double(k);

        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            avg=sum/double(k);

            maxAvg= max(maxAvg,avg);


        }
        return maxAvg;
    }
};
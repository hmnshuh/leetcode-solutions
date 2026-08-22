class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        double median=0;
        int m = nums1.size();
        int n = nums2.size();
       for(int i=0;i<m;i++){
        arr.push_back(nums1[i]);
       }

       for(int i=0;i<n;i++){
        arr.push_back(nums2[i]);
       }

       sort(arr.begin(),arr.end());

       if((m+n) %2==0){
        int fI = (m+n-1)/2;
        int sI = (m+n)/2;
        median = (arr[fI] +arr[sI])/2.0;
       }

       else{
        int I = (m+n-1)/2;
        median = arr[I];
       }
       return median;
    }
};
//Do it with Binary Search.
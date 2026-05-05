class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e= arr.size()-1;
        while(s<=e){
            int mid= s+(e-s)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) return mid;

            else if(arr[mid]<arr[mid+1]) s=mid;// s=mid not mid+1 as we will miss the peak
            else e=mid;
        }
        return 0;
    }
};
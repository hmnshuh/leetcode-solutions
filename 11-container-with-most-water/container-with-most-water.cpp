class Solution {
public:
    int maxArea(vector<int>& height) {// revise
        int maxArea = 0;
        int i=0,j=height.size()-1;
        while(i<j){
            int compArea=((j-i)*min(height[j],height[i]));
            if(compArea>maxArea){
                maxArea = compArea;
            }
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxArea;
    }
};
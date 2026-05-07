class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {// revise 2d arr
                int row= matrix.size();
        int col = matrix[0].size();
        int s=0;
        int e = col-1;
        int mid = s+(e-s)/2;
        while(s<row && e>=0){
            int element = matrix[s][e];
            if(element == target){
                return true;
            }
            else if(element > target){
                e--;
            }
            else{
                s++;
            }
            mid = s+(e-s)/2;
        }

return false;
        
    }
        
    
};
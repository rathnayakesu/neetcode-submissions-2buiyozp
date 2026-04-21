class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l1 = 0;
        int r1 = matrix.size()-1;
        int m = 0;

        while(l1<=r1){
            int mid = l1 + (r1-l1)/2;
            int l2 = 0;
            int r2 = matrix[mid].size()-1;

            if(matrix[mid][l2]>target){
                r1 = mid - 1;
            }else if(matrix[mid][r2]<target){
                l1 = mid + 1;
            }else{
                m = mid;
                break;
            }
        }

        int l2 = 0;
        int r2 = matrix[m].size()-1;

        while(l2<=r2){

            int mid2 = l2 + (r2-l2)/2;

            if(matrix[m][mid2]<target){
                l2 = mid2 + 1;
            }else if(matrix[m][mid2]>target){
                r2 = mid2 - 1;
            }else{
                return true;
            }  
        }
        return false;
    }
};

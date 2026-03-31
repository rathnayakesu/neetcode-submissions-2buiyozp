class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i<9; i++){
            unordered_set<char> rowSet;
            unordered_set<char> colSet;
            unordered_set<char> boxSet;

            for(int j=0; j<9; j++){
                if(board[i][j] != '.' && !rowSet.insert(board[i][j]).second){
                    return false;
                }

                if(board[j][i] != '.' && !colSet.insert(board[j][i]).second){
                    return false;
                }

                int rowIndex = 3*(i/3) + j/3;
                int colIndex = 3*(i%3) + j%3;

                if(board[rowIndex][colIndex] != '.' && !boxSet.insert(board[rowIndex][colIndex]).second){
                    return false;
                }

            }      

        }
        return true;
    }
};

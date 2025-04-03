class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, int> rowMap[9], colMap[9], boxMap[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                int num = board[i][j] - '0';
                int boxIndex = (i / 3) * 3 + (j / 3);

                if (rowMap[i][num]++ > 0 || colMap[j][num]++ > 0 || boxMap[boxIndex][num]++ > 0){
                    return false;
                }
            }
        }
        return true;
    }
};

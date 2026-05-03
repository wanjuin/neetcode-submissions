class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9), col(9), box(9);

        for(int r = 0; r < 9; ++r){
            for (int c = 0; c < 9; ++c){
                char ch = board[r][c];
                if (ch == '.') continue;
                int box_index = (r/3)*3 + (c/3);
                if ( (row[r].find(ch) != row[r].end()) || (col[c].find(ch) != col[c].end()) || (box[box_index].find(ch) != box[box_index].end()) ){
                    return false;
                }
                row[r].insert(ch);
                col[c].insert(ch);
                box[box_index].insert(ch);
            }
        }

        return true;
    }
};

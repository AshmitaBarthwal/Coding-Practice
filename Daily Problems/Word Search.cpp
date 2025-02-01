//https://www.geeksforgeeks.org/problems/word-search/1



bool dfs(vector<vector<char>>& mat, string& word, int i, int j, int index) {
    if (index == word.size()) return true; // All characters are matched
    
    // Boundary and character check
    if (i < 0 || i >= mat.size() || j < 0 || j >= mat[0].size() || mat[i][j] != word[index]) {
        return false;
    }

    // Mark the cell as visited
    char temp = mat[i][j];
    mat[i][j] = '#';

    // Explore in all 4 directions (up, down, left, right)
    bool found = dfs(mat, word, i + 1, j, index + 1) ||
                 dfs(mat, word, i - 1, j, index + 1) ||
                 dfs(mat, word, i, j + 1, index + 1) ||
                 dfs(mat, word, i, j - 1, index + 1);

    // Backtrack: unmark the cell
    mat[i][j] = temp;

    return found;
}

bool isWordExist(vector<vector<char>>& mat, string& word) {
    int n = mat.size();
    int m = mat[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == word[0] && dfs(mat, word, i, j, 0)) {
                return true;
            }
        }
    }
    return false;
}

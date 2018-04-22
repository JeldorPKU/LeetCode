bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    if ((boardRowSize != 9) || (boardColSize != 9))
        return false;
    int flagbox[9][10]={0};
    int flagCol[9][10]={0};
    int flagRow[10]={0};
    int i, j, k;
    int tmp;
    for (i = 0; i < boardRowSize; ++i) {
        for (j = 0; j < boardColSize;++j) {
            if (board[i][j] != '.') {
                tmp = board[i][j] - '0';
                if (flagRow[tmp] == 0)
                    flagRow[tmp] = 1;
                else
                    return false;
                if (flagCol[j][tmp] == 0)
                    flagCol[j][tmp] = 1;
                else
                    return false;
                if (flagbox[i / 3 * 3 + j / 3][tmp] == 0)
                    flagbox[i / 3 * 3 + j / 3][tmp] = 1;
                else
                    return false;
            }
        }
        for (k = 0; k < 10; ++k) {
            flagRow[k] = 0;
        }
    }
    return true;
}

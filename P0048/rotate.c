void rotate(int** matrix, int matrixRowSize, int *matrixColSizes) {
    //*matrixColSizes = matrixRowSize;
    int L = matrixRowSize;
    int w = L / 2;
    int h = L / 2;
    if (L & 1) w++;
    int i, j;
    for (i = 0; i < h; ++i) {
        for (j = 0; j < w; ++j) {
            int t = matrix[i][j];
            matrix[i][j] = matrix[L - 1 - j][i];
            matrix[L - 1 - j][i] = matrix[L - 1 - i][L - 1 - j];
            matrix[L - 1 - i][L - 1 - j] = matrix[j][L - 1 - i];
            matrix[j][L - 1 - i] = t;
        }
    }
}

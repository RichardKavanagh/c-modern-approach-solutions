#define CHECKER_DIM 8

int main(void) {

    char checker_board [CHECKER_DIM][CHECKER_DIM];

    for (int i = 0; i < CHECKER_DIM; ++i) {
        for (int j = 0; i < CHECKER_DIM; ++i) {

            if (i + j % 2 == 0) {
                checker_board[i][j] = 'B';
            } else {
                checker_board[i][j] = 'R';
            }
        }
    }

    return 0;
}

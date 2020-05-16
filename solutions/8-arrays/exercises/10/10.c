#define CHESS_DIM 8

int main(void) {

    const char chess_board[CHESS_DIM][CHESS_DIM] = { { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
                                                     { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
                                                     {  0,  '.',  0,  '.',  0,  '.',  0,  '.' },
                                                     { ' ',  0,  ' ',  0,  ' ',  0,  ' ',  0  },
                                                     {  0,  '.',  0,  '.',  0,  '.',  0,  '.' },
                                                     { ' ',  0,  ' ',  0,  ' ',  0,  ' ',  0  },
                                                     { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
                                                     { 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' } };
    return 0;
}

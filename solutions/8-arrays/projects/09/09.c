#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10
#define ASCII_A 65
#define DIRECTION_RANGE 4

int main(void) {

    char map[N][N];
    int ascii_current;
    int row, col, direction;
    bool north_possible, east_possible, south_possible, west_possible;

    srand((unsigned) time(NULL));

    /* Generating array with default value */
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            map[i][j] = '.'; 
        }
    }

    row = 0, col = 0;
    ascii_current = ASCII_A;

    do {

        north_possible = true;
        east_possible = true;
        south_possible = true;
        west_possible = true;

        map[row][col] = ascii_current;
        direction = rand() % DIRECTION_RANGE;

        if (row - 1 < 0 || map[row - 1][col] != '.') 
            north_possible = false;
        if (row + 1 > 9 || map[row + 1][col] != '.') 
            south_possible = false;
        if (col + 1 > 9 || map[row][col + 1] != '.') 
            east_possible = false;
        if (col - 1 < 0 || map[row][col - 1] != '.') 
            west_possible = false;

        if (!north_possible && !east_possible && !south_possible && !west_possible) {
            break;
        } else {

            if (direction == 0) {
                if (north_possible) {
                    ascii_current++;
                    map[row - 1][col] = ascii_current; 
                    row = row - 1;
                } else {
                    continue;
                }

            } else if (direction == 1) {
                if (east_possible) {
                    ascii_current++;
                    map[row][col + 1] = ascii_current;
                    col = col + 1;
                } else {
                    continue;
                }

            } else  if (direction == 2) {

                if (south_possible) {
                    ascii_current++;
                    map[row + 1][col] = ascii_current;
                    row = row + 1;
                } else {
                    continue;
                }

            } else if (direction == 3) {

                if (west_possible) {
                    ascii_current++;
                    map[row ][col - 1] = ascii_current; 
                    col = col - 1;
                } else {
                    continue;
                }

            }
        }

    } while(ascii_current < 'Z');

    printf("%s\n", "Displaying random walk ...");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%c%s", map[i][j], " "); 
        }
        printf("\n");
    }
    return 0;
}

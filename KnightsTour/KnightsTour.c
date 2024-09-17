#include <stdio.h>

#define COL 5
#define ROW 5
#define SIZE (COL * ROW)

int safeToGo(int x, int y) {
    if (x < 0 || y < 0 || x >= COL || y >= ROW) {
        return 1;
    } else {
        return 0;
    }
}

void tour(int x, int y, int tourOrder, int board[COL][ROW]) {
    int xMoves[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int yMoves[] = {1, -1, 2, -2, 2, -2, 1, -1};

    board[x][y] = tourOrder;
    int order = 0;

    if (tourOrder >= SIZE) {
        while (order < SIZE) {
            for (int i = 0; i < ROW; i++) {
                for (int j = 0; j < COL; j++) {
                    if (board[j][i] == order) {
                        printf("%d, ", (i * 5) + j + 1);
                    }
                }
            }

            order++;
        }

        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COL; j++) {
                if (board[j][i] == order) {
                    printf("%d\n", (i * 5) + j + 1);
                }
            }
        }

        board[x][y] = 0;
        return;
    } else {
        for (int i = 0; i < 8; i++) {
            int nextX = x + xMoves[i];
            int nextY = y + yMoves[i];

            if (safeToGo(nextX, nextY) == 0 && board[nextX][nextY] == 0) {
                tour(nextX, nextY, tourOrder + 1, board);
            }
        }

        board[x][y] = 0;
    }
}

void startTour(int board[COL][ROW]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            tour(j, i, 1, board);
        }
    }
}

int main() {
    int board[COL][ROW];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            board[j][i] = 0;
        }
    }

    startTour(board);
    return 0;
}
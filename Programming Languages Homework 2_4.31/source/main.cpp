#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int row, space, star;

    // row 從 -4 到 4，代表相對於中心列 (row = 0) 的偏移量
    for (row = -4; row <= 4; row++) {
        // 計算當前列的絕對距離 (dist = |row|)
        int dist = (row < 0) ? -row : row;

        // 印出空白：數量剛好等於與中心列的距離 dist (4, 3, 2, 1, 0, 1, 2, 3, 4)
        for (space = 1; space <= dist; space++) {
            printf(" ");
        }

        // 印出星號：數量為 9 - 2 * dist (1, 3, 5, 7, 9, 7, 5, 3, 1)
        for (star = 1; star <= 9 - 2 * dist; star++) {
            printf("*");
        }

        // 換行
        printf("\n");
    }

    return 0;
}
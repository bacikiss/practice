#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BLOCK_SIZE 3

int calculateSAD(int block1[BLOCK_SIZE][BLOCK_SIZE], int block2[BLOCK_SIZE][BLOCK_SIZE]) {
    int sad = 0;
    for (int i = 0; i < BLOCK_SIZE; i++) {
        for (int j = 0; j < BLOCK_SIZE; j++) {
            sad += abs(block1[i][j] - block2[i][j]);
        }
    }
    return sad;
}

int main() {
    int N;
    scanf("%d", &N);

    int image[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &image[i][j]);
        }
    }

    int block[BLOCK_SIZE][BLOCK_SIZE] = {{124, 124, 125}, {126, 128, 130}, {129, 131, 130}};
    int minSAD = INT_MAX;
    int centerX = (N - BLOCK_SIZE) / 2;
    int centerY = centerX;
    int resultX = 0, resultY = 0;

    for (int i = 0; i < N - BLOCK_SIZE + 1; i++) {
        for (int j = 0; j < N - BLOCK_SIZE + 1; j++) {
            int currentBlock[BLOCK_SIZE][BLOCK_SIZE];
            for (int x = 0; x < BLOCK_SIZE; x++) {
                for (int y = 0; y < BLOCK_SIZE; y++) {
                    currentBlock[x][y] = image[i + x][j + y];
                }
            }
            int currentSAD = calculateSAD(block, currentBlock);
            if (currentSAD < minSAD) {
                minSAD = currentSAD;
                resultX = i;
                resultY = j;
            }
        }
    }

    printf("The most similar block is at position (%d, %d) with SAD value of %d\n", resultX, resultY, minSAD);

    return 0;
}
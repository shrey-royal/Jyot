#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int arr[3][3], sum;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = rand() % 10 + 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("-----------\n");
    for (int i = 0; i < 3; i++) {
        sum=0;
        for (int j = 0; j < 3; j++) {
            sum += arr[j][i];
        }
        printf("%2d ", sum);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int arr[3][3] = {{4, 3, 2},{5, 4, 3},{3, 4, 2}};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d, ", arr[i][j]);
        }
    }

    return 0;
}
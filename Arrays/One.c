#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    // seed random number generator
    srand(time(0));

    char arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = (rand() % 26) + 97;
    }

    printf("\nArray - ");
    for (int i = 0; i < 10; i++) {
        printf("%c, ", arr[i]);
    }

    return 0;
}
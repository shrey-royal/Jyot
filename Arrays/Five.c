#include <stdio.h>

int main() {
    int i, countSmallLetters=0, countCapitalLetters=0, countSpecialLetters=0;
    char arr[] = {'!', 'T', 'h', '1', 's', 'S', 't', 'r', '!', 'n', 'g', 'H', '@', 's', '2', '1', '0', 'C', 'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', 's', '@', 'f', 'o', 'r', 'A', 'n', '@', 'l', 'y', 'z', 'i', 'n', 'g', 'C', 'h', 'a', 'r', 'A', 'r', 'r', 'a', 'y', '#', 'w', 'i', 't', 'h', 'N', 'u', 'm', 'b', 'e', 'r', 's', '*', 'a', 'n', 'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', '!', 'C', 'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', 's', '9', '8', '7', '6', '5', '4', '3', '2', '1', '0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '?', '+', '-', '*', '/', '%', '&', '$'};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("\nLetters -> ");
    for (i = 0; i < size; i++) {
        printf("%c, ", arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            countSmallLetters++;
        } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            countCapitalLetters++;
        } else {
            countSpecialLetters++;
        }
    }
    
    printf("\nTotal Size is %d", size);
    printf("\nTotal Small Letters are %d", countSmallLetters);
    printf("\nTotal Capital Letters are %d", countCapitalLetters);
    printf("\nTotal Special Letters are %d", countSpecialLetters);


    return 0;
}
#include <stdio.h>

// iterative approach
// void countDown(int number) {
//     for (int i = number; i >= 0; i--) {
//         printf("%d\n", i);
//     }
// }

// recursive approach
void countDown(int number) {
    // base condition
    if (number < 0) {
        return;
    }

    // recursive condition
    countDown(number-1);
    
    // body
    printf("%d\n", number);
}

int main() {
    countDown(10);

    return 0;
}
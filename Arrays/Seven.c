#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int size;

    printf("\nEnter size: ");
    scanf("%d", &size);

    int arr[size], even[size], evenCount=0;
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }

    printf("\nArray[%d]: ", size);
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    // even count
    for (int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        }
    }

    printf("\nEven Array[%d]: ", evenCount);
    for (int i = 0; i < evenCount; i++) {
        printf("%d, ", even[i]);
    }
    printf("\n");

    return 0;
}
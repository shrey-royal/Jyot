#include <stdio.h>

int main() {
    // data_type array_name[size];
    int arr[10];

    //usage
    for (int i = 0; i < 10; i++) {
        printf("\nEnter arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEven numbers - ");
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d, ", arr[i]);
        }
    }

    printf("\nOdd numbers - ");
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d, ", arr[i]);
        }
    }

    printf("\nArray - ");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}

/*
Scan a character array and print only vowels(a, e, i, o, u)

Enter arr[0] = w
Enter arr[1] = e
Enter arr[2] = r
Enter arr[3] = r
Enter arr[4] = t
Enter arr[5] = u
Enter arr[6] = i
Enter arr[7] = o
Enter arr[8] = a
Enter arr[9] = w

Vowels - e, u, i, o, a
Array - w, e, r, r, t, u, i, o, a, w
*/
#include <stdio.h>

int getDigits(int num) {
    if (num <= 0) return 0;
    return 1 + getDigits(num/=10);
}

int power(int base, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result = result * base;
    }
    return result;
}

void checkArmstrongNumber(int number) {
    int temp = number, lastDigit, result = 0, digits;

    digits = getDigits(temp);
    while(temp > 0) {
        lastDigit = temp % 10;
        result += power(lastDigit, digits);
        temp/=10;
    }

    if(result == number) {
        printf("%d is an armstrong number.", number);
    } else {
        printf("%d is not an armstrong number.", number);
    }
}

int main() {
    int number;
    // printf("Answer: %d", getDigits(87968));
    // printf("Answer: %d", power(2, 5));
    
    printf("Enter any number: ");
    scanf("%d", &number);
    checkArmstrongNumber(number);

    return 0;
}

/*
153
1. count digits
2. power every digit with total number of digits
3. add the powers of every digit
4. check if the sum is equal to the original number
*/
#include <stdio.h>

void decimalToHexadecimal(int decimalNumber) {
    char hexadecimalNumber[100];
    int i = 0;

    while (decimalNumber != 0) {
        int temp = 0;
        temp = decimalNumber % 16;

        if (temp < 10) {
            hexadecimalNumber[i] = temp + 48;
        } else {
            hexadecimalNumber[i] = temp + 55;
        }

        decimalNumber = decimalNumber / 16;
        i++;
    }

    printf("Hexadecimal Number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimalNumber[j]);
    }
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToHexadecimal(decimalNumber);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        } else if (binary[i] != '0') {
            return -1;
        }
    }
    return decimal;
}
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int choice, decimal;
    char binary[32];

    printf("Binary to Decimal and Vice-Versa Converter\n");
    printf("Select an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    scanf("%d", &choice);
  if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%s", binary);
        int result = binaryToDecimal(binary);
        if (result == -1) {
            printf("Invalid binary number.\n");
        } else {
            printf("Decimal equivalent: %d\n", result);
        }
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        if (decimal < 0) {
            printf("Please enter a positive decimal number.\n");
        } else {
            printf("Binary equivalent: ");
            decimalToBinary(decimal);
            printf("\n");
        }
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}


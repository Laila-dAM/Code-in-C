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


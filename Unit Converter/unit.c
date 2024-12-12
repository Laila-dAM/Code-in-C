#include <stdio.h>

void convertLength() {
    double value;
    int choice;
    printf("Enter value to convert: ");
    scanf("%lf", &value);
    printf("Select conversion: 1. Meters to Kilometers 2. Kilometers to Meters\n");
    scanf("%d", &choice);

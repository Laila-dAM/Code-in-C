#include <stdio.h>

void convertLength() {
    double value;
    int choice;
    printf("Enter value to convert: ");
    scanf("%lf", &value);
    printf("Select conversion: 1. Meters to Kilometers 2. Kilometers to Meters\n");
    scanf("%d", &choice);
  if (choice == 1)
        printf("%.2lf meters = %.2lf kilometers\n", value, value / 1000);
    else if (choice == 2)
        printf("%.2lf kilometers = %.2lf meters\n", value, value * 1000);
    else
        printf("Invalid choice.\n");
}
void convertMass() {
    double value;
    int choice;
    printf("Enter value to convert: ");
    scanf("%lf", &value);
    printf("Select conversion: 1. Grams to Kilograms 2. Kilograms to Grams\n");
    scanf("%d", &choice);
    if (choice == 1)
        printf("%.2lf grams = %.2lf kilograms\n", value, value / 1000);
    else if (choice == 2)
        printf("%.2lf kilograms = %.2lf grams\n", value, value * 1000);
    else
        printf("Invalid choice.\n");
}
void convertTemperature() {
    double value;
    int choice;
    printf("Enter value to convert: ");
    scanf("%lf", &value);
    printf("Select conversion: 1. Celsius to Fahrenheit 2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    if (choice == 1)
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", value, (value * 9 / 5) + 32);
    else if (choice == 2)
        printf("%.2lf Fahrenheit = %.2lf Celsius\n", value, (value - 32) * 5 / 9);
    else
        printf("Invalid choice.\n");
}

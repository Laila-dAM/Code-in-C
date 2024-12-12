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

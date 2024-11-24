#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    printf("Simple Calculator\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose an operation:\n");
    printf("1: Add\n");
    printf("2: Subtract\n");
    printf("3: Multiply\n");
    printf("4: Divide\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    	switch (choice) {
      	  case 1:
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

void calculatorMenu() {
    printf("\n--- Basic Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Power calculation (^)\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        // Display menu
        calculatorMenu();
        scanf("%d", &choice);

        // Exit condition
        if (choice == 6) {
            printf("Exiting the program. Thank you!\n");
            break;
        }

        // Input two numbers
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Perform operation based on choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                result = pow(num1, num2);
                printf("Result: %.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}

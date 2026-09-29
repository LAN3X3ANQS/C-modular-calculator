#include <stdio.h>
#include "calculator.h"
int main() {

    printf("======================\n");
    printf("Calculator\n");
    printf("======================\n");

    printf("What do you want to do?\n");
    
    int option;
    printf("Enter the number between 1 to 4: ");
    scanf("%d", &option);

    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(option) {
        case 1:
        printf("Add(+)");
        result = add(num1, num2);

        break;

        case 2:
        printf("Subtract(-)");
        result = subtract(num1, num2);

        break;

        case 3:
        printf("Multiply(*)");
        result = multiply(num1, num2);

        break;

        case 4:
        printf("Divide(/)");
        result = divide(num1, num2);

        break;

        default:
        printf("Add(+)");
        result = add(num1, num2);
    }
    
     printf("Result: %d\n", result);

    return 0;
}

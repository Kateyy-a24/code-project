#include <stdio.h>

int main() {
    char name[100];
    char section[50];
    double num1, num2;
    // Ask for complete name
    printf("Enter your complete name: ");
    fgets(name, sizeof(name), stdin);
    // Ask for section
    printf("Enter your section: ");
    fgets(section, sizeof(section), stdin);
    // Ask for two numbers
    printf("Enter two numbers separated by space: ");
    scanf("%lf %lf", &num1, &num2);
    // Display results
    printf("\nStudent Name: %s", name);
    printf("Section: %s", section);
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    if (num2 != 0) {
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
    } else {
        printf("/ Cannot divide by zero.\n");
    }
    return 0;
}
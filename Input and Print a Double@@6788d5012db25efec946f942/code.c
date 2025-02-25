// Your code here...
#include <stdio.h>

int main() {
    double num;

    // Taking user input
    printf("Enter a double value: ");
    scanf("%lf", &num);

    // Printing the value and memory address
    printf("You entered: %lf\n", num);
    printf("Memory address of num: %p\n", (void*)&num);

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Printing the result
    printf(" %d", largest);

    return 0;
}

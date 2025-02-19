// Your code here...
#include <stdio.h>

int main() {
    char input[100];
    printf("You entered: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from the input if present
    int length = 0;
    while (input[length] != '\n' && input[length] != '\0') {
        length++;
    }
    input[length] = '\0';

    int i = 0;
    printf("Hello");
    while (i < length) {
        if (input[i] == ' ') {
            printf(" and ");
        } else {
            printf("%c", input[i]);
        }
        i++;
    }
    printf("\n");

    return 0;
}

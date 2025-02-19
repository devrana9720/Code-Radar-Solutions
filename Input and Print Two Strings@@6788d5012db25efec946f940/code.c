// Your code here...

#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from the input if present
    int length = 0;
    while (input[length] != '\n' && input[length] != '\0') {
        length++;
    }
    input[length] = '\0';

    printf("Hello");
    for (int i = 0; i < length; i++) {
        if (input[i] == ' ') {
            printf(" and ");
            while (input[i] == ' ' && i < length) {
                i++;
            }
        }
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}

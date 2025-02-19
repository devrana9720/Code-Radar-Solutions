// Your code here...

#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove newline character from the input if present
    input[strcspn(input, "\n")] = '\0';

    char *token = strtok(input, " ");
    int first = 1;
    while (token != NULL) {
        if (!first) {
            printf(" and ");
        }
        printf("%s", token);
        token = strtok(NULL, " ");
        first = 0;
    }
    
    return 0;
}

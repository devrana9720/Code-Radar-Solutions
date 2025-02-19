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
    while (token != NULL) {
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    
    return 0;
}

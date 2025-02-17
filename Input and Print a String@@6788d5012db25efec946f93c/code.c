// Your code here...
#include <stdio.h>

int main(){
    char str[100];
    scanf("%[^\n]",&str);

    printf("You entered: %s",str);

    return 0;
}

// #include <stdio.h>

// int main() {
//     char input[100]; // Array to store input

//     printf("Enter a string: ");
//     scanf("%[^\n]", input); // Read input including spaces

//     printf("You entered: %s\n", input);

//     return 0;
// }

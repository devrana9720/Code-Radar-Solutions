// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    // Print true if neither number is greater than zero, otherwise false
    if (!(num1 > 0) && !(num2 > 0)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}

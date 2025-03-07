#include <stdio.h>
int main() {
    int num, pos;
    
    // Taking input
    scanf("%d %d", &num, &pos);
    
    // Toggling the nth bit using XOR operation
    num = num ^ (1 << pos);
    
    // Printing the updated number
    printf("%d\n", num);
    
    return 0;
}

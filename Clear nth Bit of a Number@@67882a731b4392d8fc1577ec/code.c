// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);  // Read the number and bit position

    num = num & ~(1 << n);  // Clear the nth bit by using AND with NOT

    printf("%d\n", num);  // Print the updated number

    return 0;
}


// Your code here...
#include <stdio.h>
int main() {
    int num, n;
    scanf("%d %d", &num, &n);  // Read the number and bit position

    int bitValue = (num << n) & 1;  // Right shift and AND with 1 to get the nth bit

    printf("%d\n", bitValue);  // Print the result

    return 0;
}

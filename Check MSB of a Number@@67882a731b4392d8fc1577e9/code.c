// Your code here...
#include <stdio.h>

void checkMSB(int num) {
    int bits = sizeof(num) * 8;  // Total bits in an integer (e.g., 32 for 4-byte int)
    int msb = 1 << (bits - 1);   // Create a mask with only MSB set

    if (num & msb) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);

    checkMSB(num);

    return 0;
}

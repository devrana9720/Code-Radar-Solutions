// Your code here...
#include <stdio.h>

int main() {
    int num, pos ;
    scanf("%d", &num);

    while ((num & 1) == 0) { 
        num >>= 1;
        pos++;
    }

    printf("%d\n", pos);
    return 0;
}

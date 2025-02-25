// Your code here...
#include <stdio.h>
#include <math.h>

int main(){
    float rad;
    scanf("%f",&rad);
    int radi=2;
    int power=pow(rad,radi);
    float Area=3.14*power;

    printf("Area: %.2f",Area);
}
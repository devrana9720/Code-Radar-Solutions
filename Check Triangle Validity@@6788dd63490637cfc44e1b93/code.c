#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=((a*a)+(b*b));
    int square=sqrt(c);
    int d=sqrt(c);
    if(d==c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    
}
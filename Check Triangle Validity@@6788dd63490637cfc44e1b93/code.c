#include <stdio.h>
#include <math.h>
int main(){
    float a,b;
    scanf("%d%d",&a,&b);
    float c=((a*a)+(b*b));
    float square=sqrt(c);
    float d=sqrt(c);
    if(d==c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    
}
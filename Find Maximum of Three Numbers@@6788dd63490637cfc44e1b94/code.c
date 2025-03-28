#include "stdio.h"
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        printf("%d",a);
    }
    if(a<b){
        printf("%d",b);
    }
    if(a<c){
        printf("%d",a);
    }
    if(a>c){
        printf("%d",a);
    }
    if(b<c){
        printf("%d",a);
    }
    if(b>c){
        printf("%d",a);
    }
    
}
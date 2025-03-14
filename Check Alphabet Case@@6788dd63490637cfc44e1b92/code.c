// Your code here...
#include <stdio.h>
int main(){
    char alph;
    scanf("%c",&alph);
    if(alph>= 'A' && alph<='Z'){
        printf("uppercase");
    }
    else{
        printf("Lowercase");
    }
}
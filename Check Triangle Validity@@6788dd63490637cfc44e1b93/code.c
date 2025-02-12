#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((b==a+1)&(c==b+1))||((b==a+2)&(c==b+2)){ 
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
}
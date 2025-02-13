#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (x<0) 
    {
        printf("x");
        x=x--;
    }
    return 0;
}
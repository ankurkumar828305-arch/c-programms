#include<stdio.h>
void main(){
    int a,b;
    printf("enter the amount to withdrawand the balance respectively:");
    scanf("%d%d",&a,&b);
    if (a<=b){
        printf("transaction successful");

    }
    else {
        printf("insufficient balance ");
    }
}
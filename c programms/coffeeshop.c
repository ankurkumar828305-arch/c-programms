#include<stdio.h>
void main(){
    int n;
    printf("enter the number of coffees purchased");
    scanf("%d",&n);
    if (n>3){
        printf("you got a discount");
    }
    else{
        printf("you dont get a discount");
    }


}
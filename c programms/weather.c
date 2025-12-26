#include<stdio.h>
void main(){
    int a;
    printf("enter the temp out side:");
    scanf("%d",&a);
    if (a<15){
        printf("its cold outside");
    }
    else  if (a>35){
        printf("its hot outside");
    }
    else {
        printf("weather is pleasent ");
    }
}
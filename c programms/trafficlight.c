#include<stdio.h>
#include<string.h>
void main(){
    char a[20];
    printf("enter the traffic colour");
    scanf("%s",&a);
    if (strcmp(a,"red")==0 || strcmp(a,"RED")==0){
        printf("stop right there ");
    }
    else if (strcmp(a,"yellow")==0 || strcmp(a,"YELLOW")==0){
        printf("wait a bit you scumbag");
    }
    else if (strcmp(a,"green")==0 || strcmp(a,"GREEN")==0){
        printf("go go go ");
    }
    else {
        printf("enter the correct light colour you colourblind");
    }
}
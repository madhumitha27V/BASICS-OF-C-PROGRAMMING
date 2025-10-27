#include<stdio.h>
void main(){
    int x,y,option;
    scanf("%d %d",&x,&y);
    scanf("%d",&option);
    int one = x+y;
    int two = x-y;
    int three = x*y;
    int four = x/y;
    
    switch(option){
        case 1:
        printf("%d",one);
        break;
        case 2:
        printf("%d",two);
        break;
        case 3:
        printf("%d",three);
        break;
        case 4:
        printf("%d",four);
        break;
        default:
        printf("Invalid");
        break;
    }
    
    
}
#include<stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    
    switch(num){
         case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        default:
            printf("Invalid number");
    }
}
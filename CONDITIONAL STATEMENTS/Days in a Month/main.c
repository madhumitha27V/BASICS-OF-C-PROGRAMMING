#include<stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    
    switch(num){
         case 1:
         case 3:
         case 5:
         case 7:

            printf("31");
            break;
            
        case 2:
            printf("28");
            break;
        
        case 4:
        case 6:
        case 9:
            printf("30");
            break;
            
        default:
            printf("Invalid number");
            break;
    }
}
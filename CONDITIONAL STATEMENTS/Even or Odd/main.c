#include<stdio.h>
void main(){
    int a;
    printf("Enter a num: ");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
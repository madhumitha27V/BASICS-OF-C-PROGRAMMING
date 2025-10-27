#include<stdio.h>
void main(){
    int a,b;
    
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);

    if(a == b){
        printf("Equal");
    }
    else{
        printf("Not equal");
    }
}
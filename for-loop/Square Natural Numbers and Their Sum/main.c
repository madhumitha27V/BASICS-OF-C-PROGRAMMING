#include<stdio.h>
void main(){
    int n,sum = 0,a;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        a = i * i;
        sum = sum + a;

        printf("%d",a);
        printf("\n");

    }
    printf("%d",sum);
}
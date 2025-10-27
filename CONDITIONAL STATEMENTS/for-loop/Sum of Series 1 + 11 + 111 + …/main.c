#include<stdio.h>
void main(){
    int a = 1,n,sum = 0;
    scanf("%d",&n);
    for(int i = 1 ; i < n ; i++){
        a = a * 10 + 1;
        sum = sum + a;
        printf("%d",a);
        printf("\n");
    }
    printf("\n%d",sum);
}









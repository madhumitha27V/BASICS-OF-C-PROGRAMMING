#include<stdio.h>
void main(){
    int a = 9,n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        a = a * 10 + 9;
        printf("%d ",a);
    }
    printf("\n%d",a);
}



    

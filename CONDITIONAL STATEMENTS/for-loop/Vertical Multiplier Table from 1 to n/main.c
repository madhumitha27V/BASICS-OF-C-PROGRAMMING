#include<stdio.h>
void main(){
    int m,n;
    scanf("%d",&m);
    for(int i = 1 ; i <= 10 ; i++){
        for(int j = 1 ; j < m ; j++){
            printf("%d x %d = %d\n",j,i,i*j);
        }
    }
}
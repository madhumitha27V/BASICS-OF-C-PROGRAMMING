#include<stdio.h>
void main(){
    int num,cube;
    scanf("%d",&num);
    for(int i = 0 ;i <= num ; i++){
        cube = i*i*i;
        printf("%d\n",cube);
    }
}
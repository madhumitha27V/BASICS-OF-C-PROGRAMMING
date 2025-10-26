#include<stdio.h>
void main(){
    int sum = 0;
    for(int i = 0 ; i <= 10 ; i++){
        sum = sum + i;
    }
    printf("%d",sum);
    float avg = sum/10;
    printf("\n%.2f",avg);
}
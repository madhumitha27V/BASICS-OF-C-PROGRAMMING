#include <stdio.h>

int main()
{
    int temp;
    scanf("%d",&temp);
    
    if(temp<0){
        printf("Freezing");
    }
    else if(temp>=0 && temp<10){
        printf("Very Cold");
    }
    if(temp>=10 && temp<20){
        printf("Cold");
    }
    if(temp>=20 && temp<30){
        printf("Normal");
    }
    if(temp>=30 && temp<40){
        printf("Hot");
    }
    if(temp>=40){
        printf("Very hot");
    }
}

#include<stdio.h>
void main(){
    int m;
    scanf("%d",&m);
    if(m >= 165)
        printf("Tall");
    
    else if(m == 150)
        printf("Avg");
    
    else if(m < 150)
        printf("Dwarf");
    
}
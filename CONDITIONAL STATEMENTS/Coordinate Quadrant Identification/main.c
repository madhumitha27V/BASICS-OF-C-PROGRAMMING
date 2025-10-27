#include<stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
        printf("first");
    
    else if(x<0 && y > 0)
        printf("second");
    
    else if(x<0 && y < 0)
        printf("third");
    
    else if(x>0 && y < 0)
        printf("fourth");
    
    
}
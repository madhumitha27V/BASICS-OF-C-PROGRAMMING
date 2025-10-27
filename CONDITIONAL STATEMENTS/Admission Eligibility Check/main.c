#include<stdio.h>
void main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int sum = x+y+z;
    if((x>=65 && y>=55 && z>=50 && sum>=190) || (x+y >= 140))
        printf("eligible");
    
    else 
        printf("not eligible");
    
    
    
}
#include<stdio.h>
void main(){
    int l,w,b,h;
    float pi = 3.14,r,area;
    
    int option;
    scanf("%d",&option);

    switch(option){
        case 1:
            scanf("%d %d",&l,&w);
            area = l*w;
            printf("%.2f",area);
            break;
            
        case 2:
            scanf("%f",&r);
            area = pi*r*r;
            printf("%.2f",area);
            break;
            
        case 3:
            scanf("%d %d",&b,&h);
            area = 0.5*b*h;
            printf("%.2f",area);
            break;
            
        default:
            printf("Invalid");
            break;
    }
}
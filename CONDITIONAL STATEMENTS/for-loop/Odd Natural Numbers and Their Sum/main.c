#include<stdio.h>
void main(){
    int sum = 0,count = 0;
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < 100 ; i++){
        if(i % 2 != 0){
            count = count + 1;
            printf("%d\t",i);
            sum = sum + i;
        }
         if(count >= n)           
            break;
    
    }
    printf("\n%d",sum);

}

           
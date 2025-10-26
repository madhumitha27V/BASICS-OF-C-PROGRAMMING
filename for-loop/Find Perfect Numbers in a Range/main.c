#include <stdio.h>

void main() {
    int m,n;

    scanf("%d %d", &m,&n);

    for(int i = m ; i < n; i++) {
    int sum = 0;
    
        for(int j = 1 ; j < i ; j++){
        if(i % j == 0)
            sum = sum + j;  
        } 
        if(sum == i)
            printf("%d ",i);


    
}
}
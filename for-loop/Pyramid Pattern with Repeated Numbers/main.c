#include <stdio.h>

int main() {
    int i, j, rows;
    int r = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {

        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for(j = 1; j <= i ; j++) {
            printf("%d",r++);
        }
        printf("\n");
    }

    return 0;
}
  

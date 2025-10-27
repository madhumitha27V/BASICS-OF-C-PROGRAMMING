#include <stdio.h>

void main()
{
    int rollno,mark1,mark2,mark3;
    char name[20];
    
    scanf("%d",&rollno);
    scanf("%d %d %d",&mark1,&mark2,&mark3);
    scanf("%s",name);
    
    float per = (mark1+mark2+mark3)/3;
        
        printf("%s\n",name);
        printf("%d",rollno);
        printf("%d\n%d\n%d",mark1,mark2,mark3);
        printf("\n%d\n",mark1+mark2+mark3);
        printf("%d",per);
        if(per>=60){
            printf("First");
        }
    }
    


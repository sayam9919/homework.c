#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the element:a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        }
        printf("to print the array values:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
        
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
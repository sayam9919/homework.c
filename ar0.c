#include<stdio.h>
void main()
    {
        int i=0;
        int marks[5];
        marks[0]=80;
        marks[1]=60;
        marks[2]=70;
        marks[3]=85;
        marks[4]=75;
        for(i=0;i<5;i++)
        printf("\n marks[%d] %d",i,marks[i]);
        for(i=0;i<5;i++)
        {
        printf("\n marks[%d] %d",i,&marks[i]);
    }
    }
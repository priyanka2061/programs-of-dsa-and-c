#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{    int n;
    int **arr;
    printf("\n enter number of row");
    scanf("%d",&n);
    arr=(int*)malloc( sizeof(int)*n);
    for(int i=0;i<n;i++)
    arr[i]=(int)malloc(sizeof(int)*n);
    printf(" input");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("output");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    getch();
}
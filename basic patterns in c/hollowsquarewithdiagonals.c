#include<stdio.h>
int main()
{

    int x,y,i,j;
    printf("Enter the row values");
    scanf("%d",&x);
    printf("Enter the columns values");
    scanf("%d",&y);
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            if (i==0 || i==x-1 || j==0 || j==y-1 || i==j || i+j == x-1)

            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}
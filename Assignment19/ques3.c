//wap to read and display 2D arrays of string.
#include<stdio.h>
int main()
{
    int rows,cols;
    
    printf("Enter the number of rows:");
    scanf("%d",&rows);
     printf("Enter the number of columns:");
    scanf("%d",&cols);

    char stringsArray[rows][cols][100];
    for(int i=0;i<rows;i++)
    {
       for(int j=0;j<cols;j++)
       {
         printf("Enter string at position (%d,%d):",i,j);
         scanf("%s",stringsArray[i][j]);
       }
    }

    printf("\nEntered strings:\n");
    for(int i=0;i<rows;i++)
    {
       for(int j=0;j<cols;j++)
       {
        printf("%s\n",stringsArray[i][j]);
       }
    }
    return 0;
}
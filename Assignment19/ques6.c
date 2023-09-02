//Wap to print the strings which are pallindrome in the list .
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100][100];
    int i,j,n;
     printf("Enter the no. of strings:");
    scanf("%d",&n);
    printf("Enter the string:\n");
    for(i=0;i<n;i++)
    {
       scanf("%s",&string[i]);
    }
    printf("\nPallindrome strings in the list:\n");
    for(i=0;i<n;i++)
    {
        int len=strlen(string[i]);
        int flag=0;
        for(j=0;string[i][j]!='\0';j++)
        {
            if(string[i][j]!=string[i][len-j-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%s\n",string[i]);
        }
    }
    return 0;
}
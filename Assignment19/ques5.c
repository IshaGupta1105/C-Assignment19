// Given list of email addresses ,check whether email addresses have @ or not.print the odd email.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char email_addresses[100][100];
    printf("Enter the no. of emails:");
    scanf("%d",&n);
    printf("Enter the emails:\n");
    for(i=0;i<n;i++)
    {
       scanf("%s",&email_addresses[i]);
    }

    for(i=0;i<n;i++)
    {
         int found=0;
        for( j=0;email_addresses[i][j]!='\0';j++)
        {
            if(email_addresses[i][j]=='@')
            {
                found=1;
                break;
            }

        }
    if(found==0)
        {
        printf("The odd email out: %s\n",email_addresses[i]);
        }
    }
    return 0;
}
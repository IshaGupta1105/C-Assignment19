//create an authentication system.it should be menu driven.
#include<stdio.h>
int main()
{
    char password[10],username[10],ch;
    int i;
    printf("Enter usernames:");
    gets(username);
     printf("Enter the password < any 8 character:");
     for(i=0;i<8;i++)
     {
        ch=getchar();
        password[i]=ch;
        ch='*';
        printf("%c",ch);
     }
     password[i]="\0";
     //original password can be printd if needed
     printf("\nYour password is:");
       for(i=0;i<8;i++)
       {
        printf("%c",password[i]);
       }
    return 0;
}
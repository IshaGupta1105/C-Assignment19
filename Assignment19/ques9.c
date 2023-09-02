//wap that asks the user to enter a username.If the username entered
//is one of the names in the list then the user is allowed to calculate
//factorial of a number.otherwise an error message is displayed.
#include<stdio.h>
#include<string.h>

int factorial(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return(n*factorial(n-1));

}
int main()
{
    char usernames[3][20]={"user1","user2","user3"};
    char inputUsername[20];
    int num,i;
    
    printf("Enter your username:");
    gets(inputUsername);
    
    int allowed=0;
    for(i=0;i<3;i++)
    {
        if(strcmp(inputUsername,usernames[i])==0)
        {
            allowed=1;
            break;
        }
    }
    if(allowed)
    {
        printf("Enter a number to calculate its factorial:\n");
        scanf("%d",&num);
        int result=factorial(num);
        printf("Factorial of %d is %d\n",num,result);
    }
    else{
        printf("ERROR:Access denied\nInvalid usernames\n");
    }
    return 0;
}
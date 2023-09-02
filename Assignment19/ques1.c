// Write a program to find the number of vowels in each of the 5 strings stored in two d array,taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char strings[5][100];
    int vowels[5]={0};
    printf("Enter 5 strings:\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter string %d:",i+1);
        gets(strings[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<strlen(strings[i]);j++)
        {
            char c=strings[i][j];
              if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
              {
                vowels[i]++;
              }
        }
    }
   printf("Number of vowels in each string:\n");
    for(int i=0;i<5;i++)
    {
        printf("String %d: %d vowels\n",i+1,vowels[i]);
    }
return 0;
}
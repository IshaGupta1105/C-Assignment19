//Write a program to sort 10 city names stored in two d arrays taken from user

#include<stdio.h>
#include<string.h>
int main()
{
    char cityNames[10][50];
    char temp[50];
    printf("Enter the names of 10 cities:\n");
    for(int i=0;i<10;i++)
    {
        printf("City %d:",i+1);
        gets(cityNames[i]);
    }
    
    for(int i=0;i<10;i++)
   {
      for(int j=i+1;j<10;j++)
      {
         if(strcmp(cityNames[i],cityNames[j])>0)
         {
            strcpy(temp,cityNames[i]);
            strcpy(cityNames[i],cityNames[j]);
            strcpy(cityNames[j],temp);
         }
      }
   }

   printf("The sorted order of city names are:\n");
   for(int i=0;i<10;i++)
   {
      printf(" %d. %s\n",i+1,cityNames[i]);
   }
    return 0;
}

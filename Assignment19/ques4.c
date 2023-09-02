//Wap to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][10]={"Isha","Shiva","Jaya","Mahadev","Bhola"};
    char name[]="Isha";
    int found=0;
    for(int i=0;i<5;i++)
    {
        if(strcmp(name,a[i])==0)
          {
            found=1;
            printf("String found");
          }
    }
    if(found==0)
    {
        printf("String not found");
    }
    return 0;
}
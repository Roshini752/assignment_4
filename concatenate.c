#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="thunder";
    char str2[]="soft";
    int i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    int j=0;
    while(str2[j] != '\0')
    {
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("%s",str1);
}
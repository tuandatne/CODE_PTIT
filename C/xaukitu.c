#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    char vidu[50];
    gets(vidu);
    strcat(vidu,vidu);
    printf("%s",vidu);
}
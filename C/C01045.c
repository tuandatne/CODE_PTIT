#include<stdio.h>
#include<string.h>
int main ()
{
    char xau[100];
    scanf("%s",xau);
    printf("%c %c",xau[0], xau[strlen(xau)-1]);
}
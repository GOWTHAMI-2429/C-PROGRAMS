#include <stdio.h>

void main() {
char ch;
printf("enter the a value \n");
scanf("%c",&ch);
int res=(ch>='0')||(ch<='9');
    printf("%c is digit or not i.e is :%d",ch,res);
}
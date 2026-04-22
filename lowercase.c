#include <stdio.h>
void main() {
   char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    int res=(ch>='a')&&(ch<='z');
    printf("%c is the lowercase alphabet i.e is:%d",ch,res);
}
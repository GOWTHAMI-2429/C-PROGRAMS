#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    int res= !((ch>='0')&&(ch<='9'));
    printf("%c is a symbol i.e is:%d",ch,res);

    return 0;
}
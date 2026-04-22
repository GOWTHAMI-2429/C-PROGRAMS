#include <stdio.h>
void main() {
 char ch;   
    printf("enter the character\n");
    scanf("%c",&ch);
    int res=(ch=='b')||(ch=='c')||(ch=='d')||(ch=='f')||(ch=='g')||(ch=='h')||(ch=='j')||(ch=='k')||(ch=='l')||(ch=='m')||(ch=='n')||(ch=='p')||(ch=='q')||(ch=='r')||(ch=='s')||(ch=='t')||(ch=='v')||(ch=='w')||(ch=='x')||(ch=='y')||(ch=='z');
    printf("%c is a consonants i.e is%d",ch,res);
}
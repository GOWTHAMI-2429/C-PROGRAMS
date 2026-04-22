#include <stdio.h>
void main()
{
    int temperature;
    printf("enter the temperature:\n");
    scanf("%d",&temperature);
    int summer;
    printf("enter 1 for summer and 0 for not summer");
    scanf("%d",&summer);
    if(summer==1)
    {
        if(summer>=60 && summer<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(summer>=90 && summer<=60)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}
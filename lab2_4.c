#include<stdio.h>
int main()
{
    int date;
    char name,hand=92;
    scanf("%c",&name);
    scanf("%d",&date);
    if(date%10==5)
    {
        printf("%c",hand);
    }
    if(date%2==1)
    {
        if(name>='A'&&name<='I')
        {
            printf("(^_^)");
        }
        else if(name>='J'&&name<='R')
        {
            printf("(*o*)");
        }
        else if(name>='S'&&name<='Z')
        {
            printf("(T_T)");
        }
    }
    else if(date%2==0)
    {
        if(name>='A'&&name<='I')
        {
            printf("{@_@}");
        }
        else if(name>='J'&&name<='R')
        {
            printf("{*v*}");
        }
        else if(name>='S'&&name<='Z')
        {
            printf("{x_x}");
        }
    }
    if(date%10==5)
    {
        printf("/");
    }
    return 0;
}

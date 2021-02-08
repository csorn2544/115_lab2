#include <stdio.h>
int main()
{
    unsigned int a,b,c,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=a+b+c;
        if(100>=sum&&sum>=80)
        {
            printf("A");
        }
        else if(79>=sum&&sum>=75)
        {
            printf("B+");
        }
        else if(74>=sum&&sum>=70)
        {
            printf("B");
        }
        else if(70>=sum&&sum>=65)
        {
            printf("C+");
        }
        else if(64>=sum&&sum>=60)
        {
            printf("C");
        }
        else if(59>=sum&&sum>=55)
        {
            printf("D+");
        }
        else if(54>=sum&&sum>=50)
        {
            printf("D");
        }
        else if(49>=sum&&sum>=0)
        {
            printf("F");
        }
}

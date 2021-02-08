#include <stdio.h>
int main()
{
    float time,proa=199.00,prob=299.00;
    char promotion;
    scanf("%c",&promotion);
    scanf("%f",&time);
    if(promotion=='A')
    {
        if(200>=time)
        {
            printf("%.2f",proa);
        }
        else
        {
            proa=proa+(((time-200)*60)*(3.00/60.00))+0.40;
            printf("%.2f",proa);
        }
    }
    if(promotion=='B')
    {
        if(400>=time)
        {
            printf("%.2f",prob);
        }
        else
        {
            prob=prob+(((time-400)*60)*(2.00/60.00))+0.40;
            printf("%.2f",prob);
        }
    }
}

#include <stdio.h>
int main()
{
    float time,proa=199.00,prob=299.00,fraction,seconds;
    char promotion;
    scanf("%c",&promotion);
    scanf("%f",&time);
    if(promotion=='A')
    {
        if(200>=time)
        {
            printf("%.2f",proa);
        }
        else if(time>200)
        {
            time=time-200;
            seconds=time*60;
            fraction=seconds*(3.00/60.00);
            proa=proa+fraction;
            printf("%.2f",proa);
        }
    }
    if(promotion=='B')
    {
        if(400>=time)
        {
            printf("%.2f",prob);
        }
        else if(time>400)
        {
            time=time-400;
            seconds=time*60;
            fraction=seconds*(2.00/60.00);
            prob=prob+fraction;
            printf("%.2f",prob);
        }
    }
}

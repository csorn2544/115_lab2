#include<stdio.h>
int main()
{
    char N[15];
    scanf("%s",N);
    for(int i=0;i<N[i];i++)
    {
        switch(N[i])
        {
            case '0': printf("Zero"); break;
            case '1': printf("One"); break;
            case '2': printf("Two"); break;
            case '3': printf("Three"); break;
            case '4': printf("Four"); break;
            case '5': printf("Five"); break;
            case '6': printf("Six"); break;
            case '7': printf("Seven"); break;
            case '8': printf("Eight"); break;
            case '9': printf("Nine"); break;
        }
        if(i<N[i+1])
        {
            printf("-");
        }
    }
    return 0;
}

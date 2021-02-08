#include <stdio.h>
int main()
{
    int a, b, c, t;
    char str[4];
    int num[3];

    scanf( "%d %d %d", &a, &b, &c );
    if ( a > b )
    {
        t = a;
        a = b;
        b = t;
    }
    if ( a > c )
    {
        t = a;
        a = c;
        c = t;
    }
    if ( b > c )
    {
        t = b;
        b = c;
        c = t;
    }

    scanf( "%s", str );
    for (int i=0; i<3; ++i )
    {
        if      ( str[i] == 'A' ) num[i] = a;
        else if ( str[i] == 'B' ) num[i] = b;
        else if ( str[i] == 'C' ) num[i] = c;
    }
    printf( "%d %d %d\n", num[0], num[1], num[2] );

    return 0;
}

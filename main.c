#include <stdio.h>

int main ()
{
    int a,b,c;

    scanf ("%d %d %d", &a, &b, &c);

    if ((a != b) && (b == c))
    {
        printf ("A");
    }

    else if ((c != a) && (a == b))
    {
        printf ("C");
    }

    else if ((b != a) && (a == c))
    {
        printf ("B");
    }

    else
    {
        printf ("*");
    }

    return (0);

}

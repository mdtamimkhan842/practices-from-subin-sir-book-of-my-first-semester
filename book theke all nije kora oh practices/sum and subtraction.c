#include <stdio.h>
int main ()
{
    int x,y, x_plus_y, x_minus_y;
    printf ("Enter value of x+y: ");
    scanf ("%d%d", &x_plus_y);
    printf ("Enter value of x-y: ");
    scanf ("%d%d", &x_minus_y);
    x= ( x_plus_y + x_minus_y)/2;
    y= ( x_plus_y + x_minus_y)/2;

    printf ("x= %d\n, y= %d\n", x, y);

    return 0;
}


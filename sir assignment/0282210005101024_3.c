#include <stdio.h>
int main ()
{
int i,j,k, max;
printf ("Enter the value:");
scanf ("%d%d%d", &i, &j, &k);
max = (i>j && i>k)? (i): (j>k)?(j):(k);
printf ("The maximum values: %d\n", max);


return 0;
}
//max = (i>j && i>k) ? (i): (j>k) ? (j): (k);

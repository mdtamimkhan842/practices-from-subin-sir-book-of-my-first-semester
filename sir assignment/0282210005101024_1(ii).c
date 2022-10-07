
#include <stdio.h>
int main ()
{
int S, u,t,a;
printf ("Enter your value:");
scanf ("%d%d%d", &u,&a,&t);
S= u*t+0.5*a*(t*t);
printf ("result: %d\n", S);

return 0;
}

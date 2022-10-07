#include <stdio.h>
int main ()
{
int n, i, m;
for (n=1; n<=20; n++){
for (i=1; i<=10; i++){
m= i*n;
printf ("%d*%d= %d\n", n, i, m);
}
printf ("\n\n");
}
return 0;
}

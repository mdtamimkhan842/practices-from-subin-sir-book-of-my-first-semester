#include <stdio.h>
int main ()
{
    int n, i;
    printf ("Enter one values from user:");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        if (i % 2==0)
        {
            continue;
        }
        printf ("%d\n", i);
    }
    return 0;
}

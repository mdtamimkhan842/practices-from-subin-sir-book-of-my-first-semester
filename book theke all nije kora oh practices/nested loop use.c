#include <stdio.h>
int main ()
{
int a,b,c;

for (a=1; a<=3; a++){//1 2 3 //1
for (b=1; b<=3; b++){//1 2 3
        if ( b!=a){//2
for (c=1; c<=3; c++){//1 2 3
        if (c!=a && c!=b){//3
printf ("%d  %d   %d\n", a,b,c);
}
}
}
}
}
return 0;
}


 #include <stdio.h>
 int main ()
 {
 int n, i;
scanf ("%d", &n);
for (i=1; i<=n; i++){// 1,2,20,30
        printf ("%d\n", i);
        if (n>20){
            break;
        }
}
 return 0;
 }

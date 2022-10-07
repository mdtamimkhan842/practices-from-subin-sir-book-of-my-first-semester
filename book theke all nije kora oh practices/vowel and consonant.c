#include <stdio.h>
int main ()
{
    char ch;
    printf ("Enter one values from user:");
    scanf ("%c", &ch);
    if (ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    {
        printf ("Vowel\n");
    }
    else
    {
        printf ("consonant\n");

    }
    return 0;
}

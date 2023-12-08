#include <stdio.h> 
#include <math.h>

// https://informatics.msk.ru/mod/statements/view.php?id=276#1
void maximum()
{
    int a;
    int b;
    int max;

    scanf("%d%d", &a, &b);
    if (a >= b)
        max = a;
    else
        max = b;
    printf("%d", max);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=253#1
void leap_year()
{
    int a;
    int c;

    scanf("%d", &a);
    c = a % 4;
    if (c = 0)
        printf("YES");
    else
        printf("NO");
}

int main()
{
    leap_year();
    return 0;
}
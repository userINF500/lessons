#include <stdio.h> 
#include <math.h>
// https://informatics.msk.ru/mod/statements/view.php?id=276#1

void maximum()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    int max;
    if (a>=b)
        max = a;
    else
        max =b;
    printf("%d", max);
}

// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=253#1

void leap_year()
{
    int a;
    int c;
    c = a % 4;
    scanf("%d", a);
    if (c= 0)
        printf("YES");
    else
        printf("NO");
}

int main()
{
    leap_year();
    return 0;
}
#include <stdio.h>
#include <math.h>

// https://informatics.msk.ru/mod/statements/view.php?id=2296#1
void hyp()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    printf("%lf", sqrt(a * a + b * b));
}

// https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2937#1
void next_and_prev()
{
    int a;
    
    scanf("%d", &a);
    printf("The next number for the number %d is %d.\n"
        "The previous number for the number %d is %d.", a, a + 1, a, a - 1);
}

#include <stdio.h>;
#include <math.h>;
// https://informatics.msk.ru/mod/statements/view.php?id=276#1
void maximum ()
{
    int a;
    int b;
    int max;
    scanf("%d%d, &a, &b");
    if (a >= b)
        max = a;
    else
        max =b;
    printf("%d", max)
}
int main ()
{
    maximum();
}
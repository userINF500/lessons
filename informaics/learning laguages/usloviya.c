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
int main()
{
    maximum();
    return 0;
}
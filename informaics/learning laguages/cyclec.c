#include <math.h>
#include <stdio.h>

// https://informatics.msk.ru/mod/statements/view.php?id=278#1
void sum_of_squares()
{
    int n;
    int i;
    int sum;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    printf("%d", sum);
}

// https://informatics.msk.ru/mod/statements/view.php?id=278&chapterid=351#1
void factorial()
{
    int N;
    int i;
    int result;
    result = 1;

    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        result = result * i;
    }
    printf("%d", result);
}

// https://informatics.msk.ru/mod/statements/view.php?id=278&chapterid=352#1
void degree()
{
    int N;
    int i;
    int result;
    result = 1;

    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        result = result * 2;
    }
    printf("%d", result);
}

// https://informatics.msk.ru/mod/statements/view.php?id=278&chapterid=319#1
void geometrical_progression()
{
    int a;
    int n;
    int result;
    int sum;
    int i;
    result = 1;
    sum = 1;

    scanf("%d%d", &a, &n);
    for (i = 1; i <= n; i++)
    {
        result = result * n;
        sum += result;
    }
    printf("%d", sum);
}

//https://informatics.msk.ru/mod/statements/view.php?id=249#1
void list_of_squares()
{
    int N;
    int i;
    i = 1;   

    scanf("%d", &N);
    while(i * i <N)
    { 
        printf("%d", i * i);
        i ++ ;
    }
}

int main()
{
    list_of_squares();
    geometrical_progression();
    return 0;
}

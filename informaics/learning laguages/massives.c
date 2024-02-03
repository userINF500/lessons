#include <stdio.h> 
#include <stdlib.h>

// https://informatics.msk.ru/mod/statements/view.php?id=208#1
void A0_A2_A4()
{
    int N, i, j, *p;
    
    scanf("%d", &N);
    int A[N];
    p = malloc(N * sizeof(int));
    

    for ( i = 0; i < N; i++)
    {
        scanf ("%d", &p[i]);
    } 

    for (j = 0; j < N; j += 2)
    {
        printf("%d ", p[j]);
    }
    free(p);
    
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=64#1
void write_even_numbers()
{
    int N, k, j, *p;
    
    scanf("%d", &N);
    int arr[N];
    p = malloc(N * sizeof(int));

    for (k = 0; k < N; k++)
    {
        scanf ("%d", &p[k]);
    } 

    for (j = 0; j < N; j ++)
    {
        if (p[j] % 2  == 0)
        {
            printf("%d ", p[j]);
        }
    }
    free(p);
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=65#1
void The_number_of_positive_elements()
{
    int N, i, j, k, *p;

    k = 0;
    scanf("%d", &N);
    int arr1[N];
    p = malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
    {
        scanf ("%d", &p[i]);
    } 
    
    for (j = 0; j < N; j ++)
    {
        if (p[j] > 0)
        {
            k += 1;
        }
    }
    printf("%d", k);
    free(p);
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=66#1
void large_then_prev()
{
    int N, i, j, k, *p;

    k = 0;
    scanf("%d", &N);
    int arr1[N];
    p = malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
    {
        scanf ("%d", &p[i]);
    } 
    
    for (j = 0; j < N - 1; j ++)
    {
        if (p[j] < p[j + 1])
        {
            k += 1;
        }
    }
    printf("%d", k);
    free(p);
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=67#1
void two_elements_with_the_same_signs()
{
    int N, i, j, k, *p;

    k = 0;
    scanf("%d", &N);
    int arr1[N];
    p = malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
    {
        scanf ("%d", &p[i]);
    } 
    
    for (j = 0; j < N - 1; j ++)
    {
        if (p[j] * p[j ++] > 0)
        {
            k += 1;
        }
    }

    if (k > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    free(p);
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=68#1
void large_then_neighbours()
{
    int N, i, j, k,*p;

    k = 0;
    scanf("%d", &N);
    int arr1[N];
    p = malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
    {
        scanf ("%d", &p[i]);
    } 
    
    for (j = 0; j < N - 1; j++)
    {
        if (p[j] < p[j + 1] && p[j + 1] > p[j + 2])
        {
            k += 1;
        }
    }
    printf("%d", k);
    free(p);
}

int main ()
{
    large_then_neighbours();
    return 0;
}

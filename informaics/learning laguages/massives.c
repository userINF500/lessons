#include <stdio.h> 

// https://informatics.msk.ru/mod/statements/view.php?id=208#1
void A0_A2_A4()
{
    int N, i, j;
    
    scanf("%d", &N);
    int A[N];

    for ( i = 0; i < N; i++)
    {
        scanf ("%d", &A[i]);
    } 

    for (j = 0; j < N; j += 2)
    {
        printf("%d ", A[j]);
    }
    
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=64#1
void write_even_numbers()
{
    int N, k, j;
    
    scanf("%d", &N);
    int arr[N];

    for (k = 0; k < N; k++)
    {
        scanf ("%d", &arr[k]);
    } 

    for (j = 0; j < N; j ++)
    {
        if (arr[j] % 2  == 0)
        {
            printf("%d ", arr[j]);
        }
    }
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=65#1
void The_number_of_positive_elements()
{
    int N, m, j, k;
    k = 0;
    scanf("%d", &N);
    int arr1[N];

    for (m = 0; m < N; m++)
    {
        scanf ("%d", &arr1[m]);
    } 
    
    for (j = 0; j < N; j ++)
    {
        if (arr1[j] > 0)
        {
            k += 1;
        }
    }
    printf("%d", k);
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=66#1
void large_then_prev()
{
    int N, m, j, k;
    k = 0;
    scanf("%d", &N);
    int arr1[N];

    for (m = 0; m < N; m++)
    {
        scanf ("%d", &arr1[m]);
    } 
    
    for (j = 0; j < N - 1; j ++)
    {
        if (arr1[j] < arr1[j + 1])
        {
            k += 1;
        }
    }
    printf("%d", k);
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=67#1
void two_elements_with_the_same_signs()
{
    int N, m, j, k;
    k = 0;
    scanf("%d", &N);
    int arr1[N];

    for (m = 0; m < N; m++)
    {
        scanf ("%d", &arr1[m]);
    } 
    
    for (j = 0; j < N - 1; j ++)
    {
        if (arr1[j] * arr1[j + 1] > 0)
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
}

// https://informatics.msk.ru/mod/statements/view.php?id=208&chapterid=68#1
void large_then_neighbours()
{
    int N, m, j, k;
    k = 0;
    scanf("%d", &N);
    int arr1[N];

    for (m = 0; m < N; m++)
    {
        scanf ("%d", &arr1[m]);
    } 
    
    for (j = 0; j < N - 1; j ++)
    {
        if (arr1[j] < arr1[j + 1] && arr1[j + 1] > arr1[j + 2])
        {
            k += 1;
        }
    }
    printf("%d", k);
}

int main ()
{
    large_then_neighbours();
    return 0;
}

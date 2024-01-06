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

int main ()
{
    The_number_of_positive_elements();
    return 0;
}

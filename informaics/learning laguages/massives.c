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
    int N, i, j;
    
    scanf("%d", &N);
    int arr[N];

    for ( i = 0; i < N; i++)
    {
        scanf ("%d", &arr[i]);
    } 

    for (j = 0; j < N; j ++)
    {
        if (arr[j] % 2  == 0)
        {
            printf("%d ", arr[j]);
        }
    }
}

int main ()
{
    write_even_numbers();
    return 0;
}

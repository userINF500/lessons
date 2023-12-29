#include <stdio.h> 
#include <math.h>

// https://informatics.msk.ru/mod/statements/view.php?id=208#1
void A0_A2_A4 ()
{
    int N, i, j;
    

    scanf("%d", &N);
    int A[N];

    for( i = 0; i < N; i++)
    {
        scanf ("%d", &A[i]);
    } 

    for (j = 0; j < N; j += 2)
    {
        printf("%d ", A[j]);
    }
    
}

int main ()
{
    A0_A2_A4();
    return 0;
}
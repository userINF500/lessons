#include <stdio.h>
#include <math.h>

int prost(int k)
{
    int s = 0;

     for (int i = 1; i <= round(sqrt(k)); i++)
    {
        if (k % i == 0)
        {
            s += i;
        }
    }

    if (s == 1 && k != 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void decompose_into_prime_factors()
{
    int a,s;
    s = 1;

    scanf("%d", &a);
    if (a == 1)
        {
            printf("1 нельзя разложить");
        }
    else
    {
        while(a != 1)
        {   
            if (prost(s) == 1 && a % s == 0) 
            {
                a/= s;
                printf("%d ",s);
            }
            else
            {
                s += 1;
            }
        }
    }
}

void sum_of_dividers()
{
    int a,s;
    s = 0;
    scanf("%d", &a);
    for (int i =1; i<= round(sqrt(a)); i++)
    {
        if (a % i == 0)
        {
            s+=i;
            s+= a/i;
        }
    }
    printf("%d",s);
}

void number_of_dividers()
{
    int a,s;
    s = 0;
    scanf("%d", &a);
    for (int i =1; i<= round(sqrt(a)); i++)
    {
        if (a % i == 0)
        {
            s+=1;
        }
    }
    printf("%d", 2*s);
}

int main()
{
    decompose_into_prime_factors();
}


#include <stdio.h>
#include <math.h>

int is_prime(int k)
{
    int s = 0;

    for (int i = 1; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            s += i;
        }
    }

    return (s == 1 && k != 1);
}

void decompose_into_prime_factors()
{
    int a;
    int s = 1;

    scanf("%d", &a);
    if (a != 1)
    {
        while(a != 1)
        {   
            if (is_prime(s) == 1 && a % s == 0) 
            {
                a /= s;
            }
            else
            {
                s ++;
            }
        }
    }
}

void sum_of_dividers()
{
    int a;
    int s = 0;

    scanf("%d", &a);
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            s += i;
            s += a / i;
        }
    }
}

void number_of_dividers()
{
    int a;
    int s = 0;

    scanf("%d", &a);
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            s++;
        }
    }
}

int main()
{
    decompose_into_prime_factors();
}


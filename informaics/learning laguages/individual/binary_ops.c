#include<math.h>
#include <stdio.h>

int mul2(int num)
{
    return num << 1;
}

int reset_bit(int num, int pos)
{
    return num & (~ (1 << pos) );
}

int div2(int num)
{
    return num >> 1;
}

int set_bit (int num, int pos)
{
    return num | (1 << pos );
}

int div_pow2(int num, int pow)
{
    return num >> pow;
}

int pow2(int num, int pow)
{
    return num << pow;
}

int main()
{
    int a;
    int st;

    scanf ("%d%d", &a, &st);
    a = set_bit(a, st);
    printf("%x\n", a);
    return 0;
}

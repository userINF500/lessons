#include <stdio.h> 
#include <math.h>
// https://informatics.msk.ru/mod/statements/view.php?id=2296#1
void hyp()
{
    int a;
    int b;

    scanf("%d%d", &a, &b);
    printf("%lf", sqrt(a * a + b * b));
}
// https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2937#1
void next_and_prev()
{
    int a;
    
    scanf("%d", &a);
    printf("The next number for the number %d is %d.\n"
        "The previous number for the number %d is %d.", a, a + 1, a, a - 1);
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2938#1
void delezh_yablok1 ()
{
    int N;
    int K;
    scanf("%d%d", &N, &K);
    printf("%d",K/N);
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2939#1
void delezh_yablok2 ()
{
    int N;
    int K;
    scanf("%d%d", &N, &K);
    printf("%d",K-(K/N)*N);
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2941#1
void last_cyfra()
{
    int N;
    scanf("%d", &N);
    printf("%d",N-(N/10)*10);
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2942#1
void des_dvuznachnogo_chisla()
{
    int N;
    scanf("%d", &N);
    printf("%d",N/10);
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2943#1
void chislo_desyatkov()
{
    int N;
    scanf("%d", &N);
    printf("%d",(N-100)/10);
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2944#1
void summa_cifr ()
{
    int N;
    scanf("%d", &N);
    printf("%d",N/100 + (N-(N/10)*10)+((N-100)/10));
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2945#1
void next_chet()
{
    int N;
    scanf("%d", &N);
    printf("%d",(N/2+1)*2);
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2949#1
void obmen_znacheniy ()
{
    int a;
    int b;
    int c;
    scanf("%d%d", &a, &b);
    c=b;
    b=a;
    a=c;
    printf("%d%d", a,b);
}
//https://informatics.msk.ru/mod/statements/view.php?id=2296&chapterid=2950#1
void end_of_lessons()
{
    int a;
    scanf("%d", &a);
    a=a*45 + (a/2)*5 + ((a+1)/2-1)*15;
    printf("%d %d\n", a/60 + 9, a-(a/60)*60);
}
int main()
{
next_and_prev();
return 0;

}


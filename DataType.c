#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double e;
    char t[100];

    scanf("%d %lf", &j, &e);
    gets(t);
    gets(t);

    printf("%d\n", i + j);
    printf("%.1lf\n", d + e);
    printf("%s", s);
    puts(t);

    return 0;
}
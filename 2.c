#include <stdio.h>

int main()
{
    double arrDbl[] = {0.1, 12.12, 213.214, 45.458, 234.13};
    int i, n = sizeof arrDbl / sizeof(double);
    printf("Kol=%d\n", n);
    for (i = 0; i < n; i++)
        printf("arrDbl[%d]=%f\n", i, arrDbl[i]);
}
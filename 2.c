#include <stdio.h>

int main()
{
    double arrDbl[] = {1.31243, 13.11232, 3.14, 45.458, 24.13};
    int i, n = sizeof arrDbl / sizeof(double);
    printf("Kol=%d\n", n);
    for (i = 0; i < n; i++)
        printf("arrDbl[%d]=%f\n", i, arrDbl[i]);
}

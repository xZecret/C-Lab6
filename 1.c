#include <stdio.h>

int main()
{
    int n = -1, x[3], y[3], i;
    for (i = 0; i < 3; i++)
    {
        printf("x[%d]>> ", i);
        scanf("%d", &x);
        printf("y[%d]>> ", i);
        scanf("%d", &y);
    }
}
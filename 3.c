#include <stdio.h>

int main()
{
    int arr[5], i, *pArr;
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]>> %d, %X\n", i, arr[i], &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        *(arr + i) = i;
    }
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]>> %d, %X\n", i, arr[i], &arr[i]);
    }
    //arr = &arr[2];
    pArr = &arr[2];
    for (i = -2; i < 3; i++)
    {
        printf("pArr + (%d)>> %d, %X\n", i, *(pArr + i), pArr + i);
    }
}
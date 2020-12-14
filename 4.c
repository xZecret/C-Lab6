#include <stdio.h>

int increase(int *array, int size)
{
    int result = 1;
    for (int i = 1; i < size; i++)
        if (array[i - 1] > array[i])
            result = 0;
    return result;
}

int ind(int *array, int size, int value)
{
    for (int i = 1; i < size; i++)
        if (array[i] == value)
            return i;
    return -1;
}

int tree(int *array, int size)
{
    int sum = 0, comp = 1;
    for (int i = 1; i < size; i++)
    {
        comp *= array[i];
        sum += comp;
    }
    return sum;
}

int max(int *array, int size)
{
    int mx = array[0] + array[size - 1];
    for (int i = 1; i < size / 2; i++)
    {
        mx = mx > (array[i] + array[size - i - 1]) ? mx : (array[i] + array[size - i - 1]);
    }
    return mx;
}

int min(int *array, int size)
{
    int mx = array[0] + array[size - 1];
    for (int i = 1; i < size / 2; i++)
    {
        mx = mx < (array[i] + array[size - i - 1]) ? mx : (array[i] + array[size - i - 1]);
    }
    return mx;
}

int main()
{
    int x[10], y[20];
    for (int i = 0; i < 10; i++)
        x[i] = i + 1;
    for (int i = 0; i < 20; i++)
        y[i] = i + 1;
    printf("1. x array is increase >> %d\n", increase(x, 10));
    printf("2. index of 5 in x array is >> %d\n", ind(x, 10, 5));
    printf("3. tree composition of x >> %d\n", tree(x, 10));
    printf("4. max composition of y >> %d\n", max(y, 20));
    printf("5. min composition of y >> %d\n", min(y, 20));
}
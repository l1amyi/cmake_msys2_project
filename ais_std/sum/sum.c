#include "sum.h"

int list_sum(int *list, int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += list[i];
    }
    return sum;
}

#include <stdio.h>
#include "add.h"
#include "sum/sum.h"

int main(void)
{
    int a = 5;
    int b = 10;
    int sum = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, sum);

    int list[] = {1, 2, 3, 4, 5};
    int len = sizeof(list) / sizeof(list[0]);
    int total = list_sum(list, len);
    printf("The sum of the list is %d\n", total);
    return 0;
}

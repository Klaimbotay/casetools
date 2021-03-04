#include <stdio.h>
#include "func1.h"

int main(void)
{
    int i = 5;
    print_hello();
    printf("Факториал %d = %d.\n", i, factorial(i));
    return 0;
}

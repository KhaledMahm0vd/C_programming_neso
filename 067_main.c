#include <stdio.h>
#include <stdlib.h>
#include "067_file1.c"
int funx(int, int);
int main()
{
    int sum = funx(3,4);
    printf("%d", sum);
    return 0;
}
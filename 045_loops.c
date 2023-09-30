#include <stdio.h>

int main()
{
    unsigned int i = 500;
    while(i++ != 500);
    printf("%d\n", i);
    return 0;
}
#include <stdio.h>

char fun(); // function prototype
int main()
{
    char c = fun();
    printf("character is: %c", c);
}

char fun()
{
    return 'a';
}
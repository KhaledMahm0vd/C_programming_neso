//program to add two numbers without using the plus sign using half adder.

#include <stdio.h>
int main()
{
    int sum , carry, a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    while(b != 0)
    {
        sum = a ^ b;
        carry = (a & b) <<1;
        a = sum;
        b = carry;
    }
    printf("Sum of two numbers is: %d", sum);
    return 0;
}
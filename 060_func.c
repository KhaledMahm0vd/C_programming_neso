#include <stdio.h>

int areaOfRect(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}
int main()
{
    int l =10, b = 5;
    int area = areaOfRect(l, b);
    printf("%d\n", area);
}
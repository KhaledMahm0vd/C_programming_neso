#include <stdio.h>
int fun1();
int fun2();
int fun3();
int main(){
    int a;
    a = fun1() + fun2()+ fun3();
    printf("%d\n", a);
    return 0;
}
int fun1()
{
    printf("!\n");
    return 1;
}
int fun2()
{
    printf("World");
    return 1;
}
int fun3()
{
    printf("Hello");
    return 1;
}
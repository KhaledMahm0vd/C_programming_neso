#include <stdio.h>

int main(){
    int a = 1;
    int b = 1;
    int c = ++a || b++; //because of short circuit, b++ will not be executed.
    int d = b-- && --a;

    printf("%d %d %d %d" ,d,c,b,a); // 1101
    return 0;
}
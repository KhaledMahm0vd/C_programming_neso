#include <stdio.h>

int main(){
    int var = (printf("%s\n", "HELLO!"), 5);
    printf("%d\n", var);
    return 0;
}
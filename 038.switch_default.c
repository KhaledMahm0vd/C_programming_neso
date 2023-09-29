#include <stdio.h>

int main(){
    int x = 2;
    switch(x)
    {
        default: printf("default case");
            break;
        case 1: printf("Number is 1");
            break;
        case 2: printf("Number is 2");
            break;
    }
    return 0;
}
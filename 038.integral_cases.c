#include <stdio.h>

int main(){
    int a = 1, b =2 , c =3;
    switch(a+b*c)
    {
        case 1: printf("Choice 1");
            break;
        case 2: printf("choice 2");
            break;
        default: printf("default");
            break;
    }
    return 0;
}
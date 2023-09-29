#include <stdio.h>
int main(){
    int x = 23;
    switch(x)
    {
        case 3+3: printf("choice 1");
            break;
        case 3+4*5: printf("choice 2");
            break;
        default: printf("default");
            break;
    }
    return 0;
}

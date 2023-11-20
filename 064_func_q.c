#include <stdio.h>

int func(int num);

int main() {
    int number = 435;
    int result = func(number);

    printf("The number of set bits in the binary representation of %d is: %d\n", number, result);

    return 0;
}

int func(int num) {
    int count = 2;
    while (num) {
        count++;
        num >>= 2;
    }
    return count;
}
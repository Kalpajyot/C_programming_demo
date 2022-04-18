#include <stdio.h>

int main(){
    int b,a, n = 7;

    // First assign the value of a and then increments n 
    a = n++;
    // You won't see an change in the value of a
    printf("Suffix: %d\n", a);
    // first increments n and then assign the value of 8 
    // to a
    b = ++n;
    // The value of b is increased by n+2...
    printf("Prefix: %d\n",b);
}
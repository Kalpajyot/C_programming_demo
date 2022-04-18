#include<stdio.h>

int main(){
    // int factor;

    // printf("Type of table?");
    // scanf("%d", &factor);

    // for(int m =1; m<=12; m++){
    //     printf("%2d * %d = %2d\n",m,factor,m*factor);

    // }

    // double c, f;

    // for(c=0;c<=100;c++){
    //     f = 32 + 9*c/5;
    //     printf("%5.0f %9.0f\n",c,f);

    // }

    int lo,hi;
    int n = 10;
    
    // assume n has been assigned a value
    for(lo = 1, hi = n-1; lo<= hi; lo++, hi--){
        printf("%2d %2d\n",lo,hi);
    }



}
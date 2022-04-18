#include <stdio.h>

int factorial(int n){
    int count,fac=1;
    for(count =0; count<n;count++){
        fac = fac* (n-count);
        
    }
    return fac;
    
}

int main(){
    printf("%d",factorial(4));
}
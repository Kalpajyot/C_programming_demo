#include<stdio.h>
#include <stdlib.h>

int main(){
    int upper,lower,value;
    int num =0;
    FILE * out = fopen("tenRandomNumbers.txt","w");

    while(num<100000){
        num++;
        upper = 10, lower =1;
        value = (rand() % (upper -lower +1)) + lower;        
        fprintf(out,"Random number %d is %d\n",num,value);

    }

    fclose(out);
}
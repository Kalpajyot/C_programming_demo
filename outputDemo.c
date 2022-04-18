#include <stdio.h>

int main(){

    FILE * in = fopen("input.txt","r");
    FILE * out = fopen("output.txt","w");
    int num,n=0, sum = 0;

    fscanf(in, "%d", &num);

    while(num != 0){
        n = n+1;
        sum = sum +num;
        fscanf(in, "%d", &num);
    }
    if(n ==0) fprintf(out,"No numbers entered\n", n);
    fprintf(out,"%d number were entered\n", n);
    fprintf(out,"The sum is %d\n",sum);  
    fprintf(out,"The sum is %3.2f\n",(double)sum/n);

    fclose(in);
    fclose(out);
}
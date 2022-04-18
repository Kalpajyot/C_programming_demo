#include <stdio.h>

int main(){
    int a,b,r;
    printf("Enter two numbers...");
    scanf("%d %d",&a,&b);
    
   while( b != 0){
       
       r = a % b;
       a = b;
       b = r;

   }
   printf("\nTheir HCF is %d\n", a);

}
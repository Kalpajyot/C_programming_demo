#include <stdio.h>

int main(){
    double a, sum = 0;
    printf("Enter a number (0 to end): ");
    scanf("%d",&a);
  
    while(a != 0){
        sum = sum + a;
        printf("Enter a number (0 to end): ");
        scanf("%d", &a);
    }        
         printf("\nThe sum %d\n", sum);
}


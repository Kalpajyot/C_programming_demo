#include<stdio.h>

int main(){
    int num,sum= 0,n = 0;

    printf("Enter a number (0 to end): ");
    scanf("%d",&num);

    while(num !=0){
        
        sum += num; 
        printf("Enter a number (0 to end): ");
        scanf("%d",&num);
        n++;
        
        
    }
    printf("\n%d Numbers were entered\n",n);
    printf("The sum is : %d", sum);
    
    // find average of all the numbers
    printf("\nThe average is %3.2f\n", (double)sum/n);

}
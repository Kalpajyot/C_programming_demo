#include<stdio.h>

int main(){
    int num,temp = 0;
    printf("Enter a number (0 to end): ");
    scanf("%d",&num);

    while(num != 0 ){
         if(temp<num){
            temp = num;
        }
        printf("Enter a number ( 0 to end): ");
        scanf("%d",&num);
       
    }
    printf("The largest number is : %d", temp);



}
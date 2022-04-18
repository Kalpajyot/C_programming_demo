#include<stdio.h>

int main(){
    int num;
    printf("Enter a number (0 to end): ");
    scanf("%d",&num);
    int smallNum = num;

    while(num !=0){
        if(smallNum>num){
            smallNum = num;
        }
        printf("Enter a number (0 to end): ");
        scanf("%d",&num);

    }
    printf("The smallest number is : %d", smallNum);
    

}
#include <stdio.h>

int main(){
    int firstMark,secondMark,thirdMark;
    double averageMark;

    printf("Enter 3 marks");
    scanf("%d %d %d",&firstMark,&secondMark,&thirdMark);
    averageMark = (firstMark + secondMark + thirdMark)/3.0;
    if(averageMark < 50){
        printf("Average is %3.2f Fail", averageMark);
    }else{
        printf("Average is %3.2f Pass", averageMark);
    }
}
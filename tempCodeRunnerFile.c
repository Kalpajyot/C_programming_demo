#include<stdio.h>

int main(){
    int day;

    // printf("Enter a day of the week (1-7): ");

    // scanf("%d", &day);

    // while(day <1 || day>7){
    //     //as long as day is inavalid
    //     printf("Enter a day of the week (1-7): ");
    //     scanf("%d",&day);
    // }

do {
    printf("Enter a day of the week (1-7): ");
    scanf("%d",&day);
}while(day<1 || day>7);  // as long as day is valid


}
#include<stdio.h>

int main(){
//     int day;

//     // printf("Enter a day of the week (1-7): ");

//     // scanf("%d", &day);

//     // while(day <1 || day>7){
//     //     //as long as day is inavalid
//     //     printf("Enter a day of the week (1-7): ");
//     //     scanf("%d",&day);
//     // }

// do {
//     printf("Enter a day of the week (1-7): ");
//     scanf("%d",&day);
// }while(day<1 || day>7);  // as long as day is valid
    int m,n,r;
    do{
        printf("Enter two positive numbers: ");
        scanf("%d %d",&m,&n);

    }while(m<=0 || n<=0);
    printf("\nThe HCF of %d and %d is ",m,n);

do{
    r = m%n;
    m = n;
    n = r;
}while(n>0);

printf("%d\n",m);

}
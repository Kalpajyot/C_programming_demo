#include <stdio.h>

int main(){
    double deposit,initialDeposit,target;
    double initialRate = 10; 
    double YearDeposit;
    double RateatYear;
    int year = 0;
    printf("Enter the initial Deposit: ");
    scanf("%lf",&initialDeposit);
    printf("Enter the target amount: ");
    scanf("%lf", &target);
    deposit = initialDeposit;

    do{
        year++;
        RateatYear = (deposit*initialRate)/100.0;
        YearDeposit = deposit;        
        deposit += RateatYear;        
        printf("\n%d    $%3.2f    %3.2f\n", year, (double) YearDeposit, (double)RateatYear);

    }while(deposit<target);
    printf("Deposit exceeds 2000 at the end of the year %d ", year);
}
    
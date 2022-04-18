#include <stdio.h>
#define ChargePerHour 100
#define MinJobCost 150

int main(){
    double hours,parts,jobCharge;
    printf("Hours worked? ");
    scanf("%lf", &hours);
    printf("Cost of parts? ");
    scanf("%lf", &parts);
    jobCharge = hours *ChargePerHour + parts;
    if(jobCharge<MinJobCost) jobCharge = MinJobCost;
    printf("\nCharge for the job: $%3.2f\n",jobCharge);

}
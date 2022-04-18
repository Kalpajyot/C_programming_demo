#include <stdio.h>
#define MaxRegularHours 40
#define OvertimeFactor 1.5

int main(){
    
    double hours, rate, ovtPay,regPay,grossPay;
    printf("Hours worked? ");
    scanf("%lf" , &hours);
    printf("Rate of pay? ");
    scanf("%lf", &rate);

    if(hours <= MaxRegularHours){
        regPay = hours *rate;
        ovtPay = 0; 
    }
    else{
        regPay = MaxRegularHours * rate;
        ovtPay = (hours - MaxRegularHours) * rate *OvertimeFactor;

    }

    grossPay = regPay +ovtPay;
    printf("\nRegular pay: $%3.2f\n", regPay);
    printf("Overtime pay: $%3.2f\n",ovtPay);
    printf("Gross pay: $%3.2f\n",grossPay);

}
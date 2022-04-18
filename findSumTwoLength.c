#include<stdio.h>

int main(){
    int m1,cm1, m2,cm2,mSum,cmSum;
    printf("Enter the value of m and cm: ");
    scanf("%d %d", &m1,&cm1);
    printf("Enter the value of m and cm: ");
    scanf("%d %d", &m2,&cm2);

    mSum = m1 +m2;
    cmSum = cm1 + cm2;
    if(cmSum >=100){
        // cmSum = cmSum -100;
        // mSum = mSum + 1;
        mSum = mSum + cmSum/100;
        cmSum = cmSum %100;
    }
    printf("\nSum is %dm %dcm\n", mSum,cmSum);
    

}
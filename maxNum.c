#include <stdio.h>

// int main(){
   
//    int n1,n2;
//    printf("Enter two numbers: ");
//    scanf("%d %d", &n1, &n2);

//     printf("%d", max(n1,n2));


// }

// int max(int a, int b){
//     if(a<b) return b;
//     return a;
// }
// #include <stdio.h>
// int main() {
// int n1, n2;
// int max(int, int);
// printf("Enter two whole numbers: ");
// scanf("%d %d", &n1, &n2);

// while (n1 != 0 || n2 != 0) {
//     printf("The bigger is %d\n", max(n1, n2));
//     printf("Enter two whole numbers: ");
//     scanf("%d %d", &n1, &n2);
//     }
// } //end main

// int max(int a, int b) {
//     if (a > b) return a;
//     return b;
// } 

int main(){
    
    int n1,n2;
    int HCF(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    do{
        printf("\nHCF of %d %d is %d \n",n1, n2, HCF(n1,n2));
        printf("\n Enter two numbers: ");
        scanf("%d %d", &n1, &n2);
    }while(n1 != 0 || n2 != 0);

}


int HCF(int m, int n){
    int r;

    do{
        r = m %n;
        m = n;
        n = r;
    }while(n !=0);

    return m;


}
















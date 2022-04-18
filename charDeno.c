#include<stdio.h>

int main(){

    // printf("Type some data and press 'Enter' \n");
    // char ch = getchar();
 
    // // while((ch = getchar()) !=' '){        
    //     // printf("The first non-blank is %c \n",ch);
    //     // ch = getchar();
    //     // printf("%c \n", ch);
    //     while((ch = getchar()) == ' '){
    //         printf("%c \n", ch);
    //     }

    char ch;
    int numBlanks = 0;

    printf("Type some data and press 'Enter' \n");
    while((ch =getchar()) == ' ')
    numBlanks++;
    printf("The number of leading blanks is %d \n", numBlanks);
    printf("The first non-blank is %c \n", ch);




}


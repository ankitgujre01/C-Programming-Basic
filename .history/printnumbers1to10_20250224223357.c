#include<stdio.h>
void main(){   // void main() is also correct here because the return type of main function is int by default and the return type of main function is not void by default. 
    // for(int i=1; i<=10; i++){
    //     printf("%d\n", i);
    // }
    // return 0;

    //using while loops
    // int i = 1;
    // while(i<=10){
    //     printf("%d\n", i);
    //     i++;
    // }
    // return 0;

    //using do while loops
    int i = 1;
    do{
        printf("%d\n", i);
        i++;
    }while(i<=10);
    return 0;
}
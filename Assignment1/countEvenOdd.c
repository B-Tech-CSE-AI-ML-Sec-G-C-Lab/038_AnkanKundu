/*
Count Even and Odd Numbers from 1 till N
*/
#include<stdio.h>

int countEven(int n){
    return n/2;
}

int main(){
    int n=0;
    printf("Enter Number till which to count for Odd and Even :");
    do{
        scanf("%d",&n);
    }while(n<1);
    int cEven=countEven(n);
    printf("Count Of Even Numbers till %d : %d",n,cEven);
    printf("\n");
    printf("Count of Odd Numebers till %d : %d",n,n-cEven);
    printf("\n");
    return 0;
}
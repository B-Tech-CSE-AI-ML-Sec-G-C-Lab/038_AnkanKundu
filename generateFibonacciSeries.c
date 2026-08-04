/*
Generate a Fibonacci Series using function
*/
#include<stdio.h>
void printFibonacci(int n){
    if(n==1){
        printf("0 ");
        return;
    }
    int first=0;
    int second=1;
    int third=first+second;
    printf("%d %d ",first,second);
    for(int i=3;i<=n;i++){
        printf("%d ",third);
        first=second;
        second=third;
        third=first+second;
    }
}

int main(){
    int n=0;
    printf("How many Fibonacci Terms to Print :");
    do{
        scanf("%d",&n);
    }while(n<1);
    printf("%d fibonacci Terms : \n",n);
    printFibonacci(n);
    printf("\n");
    return 0;
}
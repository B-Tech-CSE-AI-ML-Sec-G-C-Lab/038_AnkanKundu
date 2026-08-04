/*
To Check if entered Numebr if Armstrong Using Function

Armstrong Numeber :
    The Number whose Sum of digits to the power of its number of digits is equal to the number itself
    Example:
        153 = 1**3 + 5**3 + 3**3
*/

#include<stdio.h>
#include<math.h>
int isArmstrong(int n){
    int ndigits=0;
    int sum=0;
    int copy=n,original=n;
    while(n){
        ndigits++;
        n=n/10;
    }
    while(copy){
        sum=sum+round(pow(copy%10,ndigits));
        copy=copy/10;
    }
    if(sum==original){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter Number to Check for Armstrong :");
    scanf("%d",&n);
    if(isArmstrong(n)){
        printf("%d is Armstrong",n);
    }
    else{
        printf("%d is Not Armstrong",n);
    }
    printf("\n");
    return 0;
}
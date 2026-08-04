/*
To check Prime Using Function
*/

#include<stdio.h>
#include<math.h>
int checkPrime(int n){
    int nfactors=0;
    int sq=sqrt(n);
    for(int i=2;i<=sq;i++){
        if(n%i==0){
            nfactors++;
            break;
        }
    }
    if(nfactors)return 0;
    return 1;
}

int main(){
    int n;
    printf("Enter Number to check for prime : ");
    scanf("%d",&n);
    if(checkPrime(n)){
        printf("%d is a Prime Number ",n);
    }
    else{
        printf("%d is Not a Prime Number ",n);
    }
    printf("\n");
    return 0;
}
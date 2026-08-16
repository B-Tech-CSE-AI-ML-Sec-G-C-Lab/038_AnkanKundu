/*
Find Prime numbers in a given range.
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
    printf("Enter Till which number to check for primes : ");
    scanf("%d",&n);
    printf("All Prime Numebrs till %d : \n",n);
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
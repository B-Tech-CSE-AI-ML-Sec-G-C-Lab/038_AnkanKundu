/*
Find Prime numbers in a given range.
*/
#include<stdio.h>
void printPrimes(int n){
    for(int i=2;i<=n;i++){
        int nfac=0;
        for(int j=2;j<i/2;j++){
            if(i%j==0){
                nfac++;
                break;
            }
        }
        if(!nfac){
            printf("%d ",i);
        }
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter Till which number to check for primes : ");
    scanf("%d",&n);
    printf("All Prime Numebrs till %d : \n",n);
    printPrimes(n);
    return 0;
}
/*
To check if a Number Entered is Palindrome
Palindrome : Numbers read same from both ends
Example:
    121
*/

#include<stdio.h>

int isPalindrome(int n){
    int copy=n;
    int original=n;
    int rev=0;
    while(copy){
        rev=rev*10 + copy%10;
        copy=copy/10;
    }
    if(rev==original){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter Number to check for Palindrome :");
    scanf("%d",&n);
    if(isPalindrome(n)){
        printf("%d is Palindrome",n);
    }
    else{
        printf("%d is Not Palindrome",n);
    }
    printf("\n");
    return 0;
}
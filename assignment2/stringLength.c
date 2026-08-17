/*
Assignment date : 11/08/2026
4. C Program to Find the length of a string without using library functions
*/
#include<stdio.h>
int stringLength(char str[]){
    int len=0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

int main(){
    char str[100];
    printf("Enter String : ");
    scanf("%[^\n]",str);
    while(getchar() !='\n');//Clearing input Buffer
    printf("Length of Entered string is %d",stringLength(str));
    printf("\n");
    return 0;
}
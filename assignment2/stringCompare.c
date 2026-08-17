/*
Assignment dated 11/08/2026
5. C Program to Compare two strings without using string library functions
*/

#include<stdio.h>
int stringCompare(char str1[],char str2[]){
    int i=0;
    while(str1[i] !='\0' && str2[i] !='\0'){
        if(str1[i]>str2[i]){
            return 1;//if str1 lexiographically greater
        }
        else if(str1[i]<str2[i]){
            return -1;//If str1 lexiographically smaller
        }
        i++;
    }
    if(str1[i]=='\0' && str2[i] !='\0'){
        return -1;//Str2 has more elements
    }
    else if(str1[i] !='\0' && str2[i] =='\0'){
        return 1;//str1 has more elements
    }
    return 0;//If both string lexiographically equal
}

int main(){
    char str1[100],str2[100];
    printf("Enter String 1 : ");
    scanf("%[^\n]",str1);
    while(getchar() !='\n');//Clearing input Buffer
    printf("Enter String 2 : ");
    scanf("%[^\n]",str2);
    while(getchar() !='\n');
    int result=stringCompare(str1,str2);
    if(result==1){
        printf("String 1 is lexiographically greater ");
    }
    else if(result==-1){
        printf("Sring 2 is lexiographlically greater ");
    }
    else{
        printf("Both strings are lexiographically equal");
    }
    printf("\n");
    return 0;
}
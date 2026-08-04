/*
Develop a Menu driven Calculator using switch case , function and loops
*/
#include<stdio.h>
int add(int a,int b){
    return a+b;
}

int substract(int a , int b){
    return a-b;
}

int multiply(int a ,int b){
    return a*b;
}

float divide(int a,int b){
    if(b==0)return -1;
    return a/b;
}



void displayMenu(){
    printf("Enter 1 to add two Numbers \n");
    printf("Enter 2 to substract two Numbers \n");
    printf("Enter 3 to multiply two Numbers \n");
    printf("Enter 4 to divide two Numbers \n");
    printf("Enter any other key to Exit programme \n");
}

int main(){
    printf("Calculator : \n");
    displayMenu();
    int x;
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        
        break;
    
    default:
        break;
    }
}
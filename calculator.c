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
    int x=-1;
    do{
        displayMenu();
        scanf("%d",&x);
        if(x!=1 && x!=2 && x!=3 && x!=4)break;
        int n1,n2;
        printf("Enter Two Numbers To perform Calculation on :");
        scanf("%d %d",&n1,&n2);
        switch (x)
        {
        case 1:
            printf("%d",add(n1,n2));
            break;
        case 2:
            printf("%d",substract(n1,n2));
            break;
        case 3:
            printf("%d",multiply(n1,n2));
            break;
        case 4:
            printf("%.2f",divide(n1,n2));
            break;
        }
        printf("\n");
    }while(x==1 || x==2 || x==3 || x==4);

    return 0;
}
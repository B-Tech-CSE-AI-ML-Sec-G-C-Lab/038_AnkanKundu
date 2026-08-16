/*
Assignment date : 11/08/2026
3. C Program to reverse an array elements in an array
*/

#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void reverseArray(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
}

void inputArray(int arr[],int size){
    printf("Enter array elements : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int len=0;
    printf("Enter number of elements :");
    scanf("%d",&len);
    int arr[len];
    inputArray(arr,len);
    reverseArray(arr,len);
    printf("Reversed Array : \n");
    printArray(arr,len);
    printf("\n");
    return 0;
}
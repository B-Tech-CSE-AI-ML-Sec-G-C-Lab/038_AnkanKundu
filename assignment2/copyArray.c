/*
Assignment date : 11/08/2026
2. Copy the elements of one array into another array
*/

#include<stdio.h>
void copyArrayElements(int destination[],int source[],int size){
   for(int i=0;i<size;i++){
    destination[i]=source[i];
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
    int copy[len];
    copyArrayElements(copy,arr,len);
    printf("Copied Array :");
    printArray(copy,len);
    printf("\n");
    return 0;
}
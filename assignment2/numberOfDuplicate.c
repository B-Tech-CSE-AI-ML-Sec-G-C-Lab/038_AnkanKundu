/*
Assignment Date : 11.08.2026
1. Count the total number of duplicate elements in an array
*/

#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b){
    int x = *(int*)a;
    int y = *(int*)b;
    return x - y;
}

int duplicateElements(int arr[],int size){
    int nduplicates=0;
    qsort(arr,size,sizeof(arr[0]),comp);
    for(int i=0;i<size-1;i++){
        if(arr[i]==arr[i+1]){
            nduplicates++;
        }
    }
    return nduplicates;
}

int main(){
    int arr[]={1,2,2,1,3,5,4,6,2,1,3,4,6,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("Number of duplicate elements in array : %d",duplicateElements(arr,length));
    printf("\n");
    return 0;
}
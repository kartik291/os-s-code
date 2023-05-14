#include<stdio.h>
#include<math.h>
void printArray(int arr[],int n){
    int i;
    printf("the sorted array is :\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void insertionsort(int arr[],int n){
    int i,j,key;
    // key will the start the arr
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){

            arr[j+1]=arr[j];
                    j=j-1;

        }
        arr[j+1]=key;
    }
}
void main()
{
    // int arr[] = {64, 25, 22, 12,11};
    int arr[]={12,34,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    printArray(arr, n);
}
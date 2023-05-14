#include<stdio.h>
void bubbleSort(int arr[],int n){
    int i,j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void main(){
    int arr[]={3,2,19,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
    printf(" %d  ",arr[i]);
    printf("\n");
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
    printf("%d  ",arr[i]);
   
    }
}

// C program for implementation of Bubble sort
// #include <stdio.h>
 
// void swap(int* xp, int* yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }
 
// A function to implement bubble sort
// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++)
 
//         // Last i elements are already in place
//         for (j = 0; j < n - i - 1; j++)
//             if (arr[j] > arr[j + 1]){
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
                
// }
 
// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
 
// // Driver program to test above functions
// int main()
// {
//     int arr[] = { 5, 1, 4, 2, 8 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }
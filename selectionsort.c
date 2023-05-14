#include <stdio.h>
#include <conio.h>
void swap(int *xp,int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void printArray(int arr[], int n)
{
            printf("the sorted array is :\n");

    for (int i = 0; i <n; i++)
    {
        printf("%d ", arr[i]);
    }
}
 void selectionsort(int arr[], int n)
{
    // in this what we do is that we create two loop and considered the first element as the smallest element in the arrya compare it with all the elements and then replace it with the smaleest one of [resent and then move the index one ahead
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
            if(min_index!=i){
                swap(&arr[min_index],&arr[i]);
                        }
            }
        }
    }


void main()
{
    // int arr[] = {64, 25, 22, 12,11};
    int arr[]={12,34,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, n);
    printArray(arr, n);
}

// C program for implementation of selection sort
// #include <stdio.h>
 
// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }
 
// void selectionSort(int arr[], int n)
// {
//     int i, j, min_idx;
 
//     // One by one move boundary of unsorted subarray
//     for (i = 0; i < n-1; i++)
//     {
//         // Find the minimum element in unsorted array
//         min_idx = i;
//         for (j = i+1; j < n; j++)
//           if (arr[j] < arr[min_idx]){
//             min_idx = j;
//           }
//         // Swap the found minimum element with the first element
//            if(min_idx != i)
//             swap(&arr[min_idx], &arr[i]);
//     }
// }
 
// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
 
// // Driver program to test above functions
// int main()
// {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }
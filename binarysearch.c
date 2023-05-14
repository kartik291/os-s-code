// #include<stdio.h>
// #include<conio.h>
// int binarySearch(int arr[],int l,int r,int x){
//     if(l<r){
//         int mid=(l+r)/2;
//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]>x){
//             r=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     return 0;

// }

// int main(){
//     int arr[]={1,45,23,6,7,8,12};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x=12;
//     int r=binarySearch(arr,0,n-1,x);
//     if(r!=0){
//     printf("the element is present at %d ",r);
//     }
// }
// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}
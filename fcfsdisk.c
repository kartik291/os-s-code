#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 8
void FCFS(int arr[],int head){
    int seek_count=0;
    int cur_track,distance;
    for(int i=0;i<size;i++){
        cur_track=arr[i];
        distance=fabs(head-cur_track);
seek_count+=distance;
        head=cur_track;
    }
    printf("\nthe seek distance is %d",seek_count);
    printf("\nthe seek sequence is :");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void main(){
    int arr[]={121,32,44,59,72,19,24,66};
    int head=50;
    FCFS(arr,head);
}
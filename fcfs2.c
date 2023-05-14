#include<stdio.h>
#include<conio.h>

#define max 30

void main(){
    int i,j,n,p[max],bt[max],at[max],wt[max],tat[max],temp[max];
    float awt=0,atat=0;
    printf("\nenter the number of processes: ");
    scanf("%d",&n);
    
    printf("\nenter the no of the process:");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }

    printf("\nenter the burst time of the process:");
    for(int i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }

    printf("\nenter the arrival time of the process:");
    for(int i=0;i<n;i++){
        scanf("%d",&at[i]);
    }

    temp[0]=0;
    printf("\nprocess \tburst time\tarrival time \twaititng time \tturnaroundtime ");
    
    for(int i=0;i<n;i++){
        wt[0]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+wt[i];
            }
            awt=awt/n;
            atat=atat/n;
            for(int i=0;i<n;i++){
       printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],at[i],wt[i],tat[i]);
            }
       printf("\nthe average watiting time is %d:",awt);
       printf("\nthe average turnaround time is %d:",atat);


}
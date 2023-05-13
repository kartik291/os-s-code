// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int bt[10], p[10], wt[10], tat[10], pr[10], i, j, n, total_wt = 0,total_tr=0, pos, avg_wt, avg_tat,temp;
//     printf("\n enter the total number of process :");
//     scanf("%d", &n);
//     printf("\n enter the burst time and priorirty :");
//     for (int i = 0; i < n; i++)
//     {
//         // printf("\nP[%d]\n",i+1);
//         // contains the burst time
//         printf("Burst Time:");
//         scanf("%d", &bt[i]);
//         // contains the priority for the process
//         printf("Priority:");
//         scanf("%d", &pr[i]);
//         // process number in correspondance
//         p[i] = i + 1;
//     }
//     // sort all the process accordingly
//     // selection sort using in which the first element of the array as smallest element and then find the minimum in the whole array and replace the algorithm with it
//     for (int i = 0; i < n; i++)
//     {
//         pos = i;
//         for(int j=i+1;j<n;j++){
//             if(pr[i]<pr[pos]){
//                 pos=j;
//             }
//         }
//         temp=pr[i];
//         pr[i]=pr[pos];
//         pr[pos]=temp;
//         // exchanging the burst time of the shortest priorirty number and the one with the current position  
//         temp=bt[i];
//         bt[i]=bt[pos];
//         bt[pos]=temp;
//  temp=p[i];
//  p[i]=p[pos];
//  p[pos]=temp;
//     }
//     wt[0]=0;
//     for(int i=0;i<n;i++){
//         wt[i]=wt[i-1]+bt[i-1];
        

//     }

//     for(int i=0;i<n;i++){
//         tat[i]=wt[i]+bt[i];
        
//     }
      

//  printf("\n\nAverage Waiting Time=%d",avg_wt);
//     printf("\nAverage Turnaround Time=%d\n",avg_tat);
//     printf("\n process burst time wating time turnaround time \n");
// for (int i=0;i<n;i++){
//     total_wt=total_wt+wt[i];
//     total_tr=total_tr+tat[i];
//      printf("   %d ",(i+1));
//         printf("       %d ", bt[i] );
//         printf("       %d",wt[i] );
//         printf("       %d\n",tat[i] );
// }
//      avg_wt=(float)total_wt/(float)n;
//      avg_tat=(float)total_tr/(float)n;
//       printf("\n\nAverage Waiting Time=%d",avg_wt);
//     printf("\nAverage Turnaround Time=%d\n",avg_tat);
// return 0;
// }
#include<stdio.h>
int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        printf("Priority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;           //contains process number
    }
    //sorting burst time, priority and process number in ascending order using selection sort
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0; //waiting time for first process is zero
    //calculate waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    avg_wt=total/n;      //average waiting time
    total=0;
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
    avg_tat=total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%d",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
return 0;
}
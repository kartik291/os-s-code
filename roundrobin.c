// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, i, count = 0, qt, sq = 0, bt[10], wt[10], tat[10], rem_bt[10], temp;
//     float awt = 0, atat = 0;
//     printf(" \nenter the number of process:");
//     scanf("%d", &n);
//     printf("\n enter the the burst time for each processes ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &bt[i]);
//         rem_bt[i] = bt[i];
//     }
//     printf("\n enter the quantum time:");
//     scanf("%d", &qt);
//     while (1)
//     {
//         for (int i = 0, count = 0; i < n; i++)
//         {
//             temp = qt;
//             if (rem_bt[i] == 0)
//             {
//                 count++;
//                 continue;
//             }
//             if (rem_bt[i] < qt)
//             {
//                 rem_bt[i] = rem_bt[i] - qt;
//             }
//             else
//                  if (rem_bt[i] > 0)
//             {
//                 temp = rem_bt[i];
//                 rem_bt[i] = 0;
//             }
//             // way to calculate the turnaround time
//             sq=sq+temp;
//             tat[i]=tat[i]+sq;
//         }
//         if(n==count){
//             break;
//         }
//     }
//     printf("\nprocess\tburst time\tturnaround time\tewaiting time");
//     for(int i=0;i<n;i++){
//         wt[i]=tat[i]-bt[i];
//             awt=awt+wt[i];
//             atat=atat+tat[i];
//             printf("\n%d\t%d\t\t%d\t\t%d",i+1,bt[i],tat[i],wt[i]);

//     }
//     awt=awt/n;
//     atat=atat/n;
//     printf("\nyour average waiting time is %f: ",awt);
//     printf("\nyour average turnaround  time is %f: ",atat);
// }
#include<stdio.h>  
#include<conio.h>  
  
void main()  
{  
      
    int i, N, sum=0,count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10];  
    float avg_wt, avg_tat;  
    printf(" Total number of process in the system: ");  
    scanf("%d", &N);  
    y = N;  
for(i=0; i<N; i++)  
{  
printf("\n Enter the Arrival and Burst time of the Process[%d]\n", i+1);  
printf(" Arrival time is: \t");    
scanf("%d", &at[i]);  
printf(" \nBurst time is: \t");   
scanf("%d", &bt[i]);  
temp[i] = bt[i];   
}    
printf("Enter the Time Quantum for the process: \t");  
scanf("%d", &quant);  
  
printf("\n Process No \t\tarrival time\t\t Burst Time \t\t TAT \t\t Waiting Time ");  
for(sum=0, i = 0; y!=0; )  
{  
if(temp[i] <= quant && temp[i] > 0)  
   {  
    sum = sum + temp[i];  
    temp[i] = 0;  
    count=1;  
    }     
    else if(temp[i] > 0)  
    {  
        temp[i] = temp[i] - quant;  
        sum = sum + quant;    
    }  
    if(temp[i]==0 && count==1)  
    {  
        y--; 
        printf("\nProcess No[%d] \t\t%d\t\t %d\t\t\t %d\t\t\t %d", i+1,at[i], bt[i], sum-at[i], sum-at[i]-bt[i]);  
        wt = wt+sum-at[i]-bt[i];  
        tat = tat+sum-at[i];  
        count =0;     
    }  
     if(i==N-1)  
     {  
         i=0;  
     }  
     else if(at[i+1]<=sum)  
     {  
         i++;  
     }  
     else  
     {  
         i=0;  
     }  
}  
// represents the average waiting time and Turn Around time  
avg_wt = wt * 1.0/N;  
avg_tat = tat * 1.0/N;  
printf("\n Average Turn Around Time: \t%f", avg_wt);  
printf("\n Average Waiting Time: \t%f", avg_tat);  
getch();  
}
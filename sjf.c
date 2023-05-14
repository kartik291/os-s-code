#include<stdio.h>
#include<conio.h>
#define max 30
int main(){
    int i,j,n,t,m,bt[max],p[max],wt[max],tat[max];
    float awt=0,atat=0;
printf("\n enter the number of process:");
scanf("%d",&n);
printf("\nenter the process number :");
for(int i=0;i<n;i++){
    scanf("%d",&p[i]);
}
printf("\nenter the burst time:");
for(int i=0;i<n;i++){
    scanf("%d",&bt[i]);
}
// sort the burst time and turnaround time
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(bt[j]>bt[j+1]){
          t=bt[j];
          bt[j]=bt[j+1];
          bt[j+1]=t;

          m=tat[j];
          tat[j]=tat[j+1];
          tat[j+1]=m;

        }
    }

    }
        printf("\nprocess time\tburst time\turnaround time\twaititng time");
    wt[0]=0;
    for( i=1;i<n;i++){
        wt[i]=bt[i-1]+wt[i-1];
        awt=awt+wt[i];
    }
    for( j=0;j<n;j++){
        tat[j]=wt[j]+bt[j];
        atat=atat+tat[j];
    }
    for(i=0;i<n;i++){
    printf("\n%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],tat[i],wt[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("\nthe average turnaround time is %f",atat);
    printf("\nthe average waiting time is %f",awt);


}

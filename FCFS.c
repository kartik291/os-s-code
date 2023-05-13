#include<stdio.h>
 void findwaiting_time(int process[],int n,int bt[],int wt[]){
    wt[0]=0;
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }
}

 void findturnaroundtime(int process[],int n,int bt[],int tr[],int wt[]){
    for(int i=0;i<n;i++){
        // to find the burst time 
        tr[i]=wt[i]+bt[i];
    }
}

 void findavgprocesstime(int process[],int n,int bt[]){
int w[n],tr[n],total_wt=0,total_tr=0;
findwaiting_time(process,n,bt,w);
findturnaroundtime(process,n,bt,tr,w);

printf("\n process burst time wating time turnaround time \n");
for (int i=0;i<n;i++){
    total_wt=total_wt+w[i];
    total_tr=total_tr+tr[i];
     printf("   %d ",(i+1));
        printf("       %d ", bt[i] );
        printf("       %d",w[i] );
        printf("       %d\n",tr[i] );
}

int s=(float)total_wt/(float)n;
int t=(float)total_tr/(float)n;

printf("\n average waiting time is %d",s);
printf("\n average turnaround time is %d",s);


}
int main(){
    int process[]={1,2,3};
    int n=sizeof(process)/sizeof(process[0]);
    int burst_time[]={10,5,8};
    findavgprocesstime(process,n,burst_time);
return 0;
}
#include<stdio.h>
int max[10][10],allocation[10][10],need[10][10];
int np,nr;
int avail[10];

void readmatrix(int matrix[10][10]){
    int i,j;
    for(i=0;i<np;i++){
        for(j=0;j<nr;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}
void display_matrix(int matrix[10][10]){
    int i,j;
    for(i=0;i<np;i++){
        printf("\n p %d",i);
        for(j=0;j<nr;j++){
            printf("%d",matrix[i][j]);
        }
    }
}

void calculate_need(){
    int i,j;
    for( i=0;i<np;i++){
        for(j=0;j<nr;j++){
            need[i][j]=max[i][j]-allocation[i][j];
        }
    }
}

void banker(){
    int i,j;
    int k=0,flag;
    int finish[10],safe_sequence[10];
    for(int i=0;i<np;i++){
        // declare all the process as the incomplete 
         finish[i]=0;
    }
    for(i=0;i<np;i++){
        flag=0;
        if(finish[i]==0){
            for(j=0;j<nr;j++){
                if(need[i][j]>avail[j]){
                    flag=1;
                    break;
                }
            }
        }
    }
        if(flag==0){
            finish[i]=1;
            safe_sequence[k]=i;
            k++;
            for(i=0;i<np;i++){
                avail[j]+=allocation[i][j];
            }
            // intialize the array again
            i=-1;
        }
        flag=0;
    for(int i=0;i<np;i++){
    if(finish[i]==0){
        printf("\n the system is not in deadlock ");
        flag=1;
        break;
    }
    }
    if(flag==0){
        printf("the system is in a state safe lock and the sequence is==>");
    for(i=0;i<np;i++){
        printf("%d",safe_sequence[i]);
      }
        }
          }

int main(){
    int j;
    {
        printf("\n enter the number of processes:");
        scanf("%d",&np);

        printf("\n enter the number of column:");
        scanf("%d",&nr);

        printf("\n enter the intial allocation: ");
        readmatrix(allocation);

        printf("\n enter the max requirement matrix:");
        readmatrix(max);
        printf("\n enter the available resources ");
        for(j=0;j<nr;j++){
            scanf("%d",&avail[j]);
        }
    }
    // display the data
    {
        printf("the date entered is \n\n\n");
        printf("\n the number of process are %d :" ,np);
        printf("\n the number of columns are %d",nr);
        printf( "intial allocation \n");
        display_matrix(allocation);
        printf("the max requirements are \n");
        display_matrix(max);
        printf("the available resources are :");
        for(j=0;j<nr;j++ ){
            printf("%d",avail[j]);
        }
    }
    {
        calculate_need();
        printf("\ncalculate need is :");
        display_matrix(need);   
    }
    banker();
    printf("\n\n\n");
    return 0;
}
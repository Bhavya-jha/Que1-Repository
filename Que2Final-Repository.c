#include<stdio.h>
#include<conio.h>
 
int main()
{
    int bursttime[20],p[20],weight[20],tat[20],pr[20],x,j,n,total=0,pos,temp,avg_wt,avg_tat;
    printf(" Total Number of Process:");
    scanf("%d",&n);
 
    printf("\n Burst Time and Priority\n");
    for(x=0;x<n;x++)
    {
        printf("\nP[%d]\n",x+1);
        printf("Burst Time:");
        scanf("%d",&bursttime[x]);
        printf("Priority:");
        scanf("%d",&pr[x]);
        p[x]=x+1;   
    }
 
      for(x=0;x<n;x++)
    {
        pos=x;
        for(j=x+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[x];
        pr[x]=pr[pos];
        pr[pos]=temp;
 
        temp=bursttime[x];
        bursttime[x]=bursttime[pos];
        bursttime[pos]=temp;
 
        temp=p[x];
        p[x]=p[pos];
        p[pos]=temp;
    }
    weight[0]=0;
   for(x=0;x<n;x++)
    {
        weight[x]=0;
        for(j=0;j<x;j++)
            weight[x]+=bursttime[j];
 
        total+=weight[x];
    }
 
    avg_wt=total/n;     
    total=0;
 
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(x=0;x<n;x++)
    {
        tat[x]=bursttime[x]+weight[x];
        total+=tat[x];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[x],bursttime[x],weight[x],tat[x]);
    }
 
    avg_tat=total/n;    
    printf("\n\nAverage Waiting Time is",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
 
    return 0;
}

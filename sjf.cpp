//sjf
#include<stdio.h>
# define MAX 30
int main()
{
	int i,j,n,p[MAX],bt[MAX],wt[MAX],tat[MAX],t;
	float awt=0,atat=0;
	printf("enter the number of processes:");
	scanf("%d",&n);
	printf("enter the burst time for each proces:\n");
	for(i=0;i<n;i++)
	{
	    printf("process %d:",i+1);
	    scanf("%d",&bt[i]);
	}
	//apply bubblesort method to short according to their burst time
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(bt[j]>bt[j+1])
			{
				t=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=t;
			    
			    t=p[j];
			    p[j]=p[j+1];
			    p[j+1]=t;
			}
		}
	}
	printf("process  bursttime  waitingtime  turnaroundtime\n");
	//for calculating waiting time,turnaround time
	for(i=0;i<n;i++)
	{
		wt[i]=0;
		tat[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t %d\t\t %d\t\t %d\n",i+1,bt[i],wt[i],tat[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("average waiting time=%f\n",awt);
	printf("average turnaround time=%f",atat);
}

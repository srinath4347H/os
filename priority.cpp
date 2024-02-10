#include<stdio.h>
#define MAX 30
int main()
{
	int i,j,n,temp,p[MAX],bt[MAX],wt[MAX],tat[MAX],pr[MAX],pos;
	float awt=0;
	float atat=0;
	printf("enter the number of processes:");
	scanf("%d",&n);
	printf("enter the burset time for each process:\n");
	for(i=0;i<n;i++)
	{
	    printf("process %d:",i+1);
	    scanf("%d",&bt[i]);
	}
	printf("enter the priority of the process:\n");
	for(i=0;i<n;i++)
	{
	    printf("process %d:",i+1);
		scanf("%d",&pr[i]);
	}
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(pr[j]<pr[pos])
			{
				pos=j;
				
			}
		}
		t=pr[i];
		pr[i]=pr[pos];
		pr[pos]=t;
		
		t=bt[i];
		bt[i]=bt[pos];
		bt[pos]=t;
	}
	wt[0]=0;
		printf("process  bursttime  priority  waitingtime  turnaroundtime\n");
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
				printf("%d\t %d\t\t %d\t %d\t\t %d\n",i+1,bt[i],pr[i],wt[i],tat[i]);
		}
		awt=awt/n;
		atat=atat/n;
		printf("average waiting time=%f\n",awt);
	    printf("average turnaroundtime=%f",atat);
}

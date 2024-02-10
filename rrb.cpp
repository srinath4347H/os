//round robin
#include<stdio.h>
int main()
{
	//qt quantum time,count=0 bcz after completion of every process count increases by 1,temp,sq temporary variables
	int i,n,qt,count=0,temp,sq=0,p[i],bt[10],wt[10],tat[10],rem_bt[10];
	float awt=0,atat=0;
	printf("enter the number of processes:");
	scanf("%d",&n);
	printf("enter the process number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter the burst of the process:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		rem_bt[i]=bt[i];
	}
	printf("enter quantum time:");
	scanf("%d",&qt);
	while(1)//condition true
	{
		for(i=0,count=0;i<n;i++)//bcz count should also increase
		{
			temp=qt;
			if(rem_bt[i]==0)
			{
				count++;
				continue;
			}
			if(rem_bt[i]>qt)
				rem_bt[i]=rem_bt[i]-qt;//if qt is 2 but bt is 6 then rem_bt=bt is 4
				else
				
					if(rem_bt[i]>=0)
					{
					temp=rem_bt[i];
					rem_bt[i]=0;
				    }
				    sq=sq+temp;
				    tat[i]=sq;
		}
		if(n==count)
		break;
	}
	printf("process  bursttime  waitingtime  turnaroundtime\n");
	for(i+0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("average waiting time=%f",awt);
	printf("average turnaroundtime=%f",atat);
}

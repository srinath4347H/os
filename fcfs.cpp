#include<stdio.h>
int main()
{
    int proces,i,j;
    int burrest_time[10],waiting_time[10],turn_around[10];
    float avgwaiting_time=0,avdturn_around=0;
    printf("enter the number of process:");
    scanf("%d",&proces);
    printf("enter the burrest time for each process:\n");
    for(i=0;i<proces;i++)
    {
        printf("proces%d:",i+1);
        scanf("%d",&burrest_time[i]);
    }
    printf("process\t BUREST TIME\t\t waiting time\t turn around\n");
    for(i=0;i<proces;i++)
    {
        waiting_time[i]=0;
        turn_around[i]=0;
        for(j=0;j<i;j++)
        {
        waiting_time[i]=burrest_time[j]+waiting_time[i];
    }
    turn_around[i]=burrest_time[i]+waiting_time[i];
        avgwaiting_time=avgwaiting_time+waiting_time[i];
         avdturn_around= avdturn_around+turn_around[i];
     printf("%d\t\t\t\t %d\t\t\t\t %d\t\t\t\t%d\n",i+1,burrest_time[i],waiting_time[i],turn_around[i]);
}
avgwaiting_time=avgwaiting_time/proces;
 avdturn_around= avdturn_around/proces;
 printf("the avrage waiting time =%f\n",avgwaiting_time);
 printf("the avrage turn around time =%f",avdturn_around);
 
return 0;
}#include<stdio.h>
int main()
{
    int proces,i,j;
    int burrest_time[10],waiting_time[10],turn_around[10];
    float avgwaiting_time=0,avdturn_around=0;
    printf("enter the number of process:");
    scanf("%d",&proces);
    printf("enter the burrest time for each process:\n");
    for(i=0;i<proces;i++)
    {
        printf("proces%d:",i+1);
        scanf("%d",&burrest_time[i]);
    }
    printf("process\t BUREST TIME\t\t waiting time\t turn around\n");
    for(i=0;i<proces;i++)
    {
        waiting_time[i]=0;
        turn_around[i]=0;
        for(j=0;j<i;j++)
        {
        waiting_time[i]=burrest_time[j]+waiting_time[i];
    }
    turn_around[i]=burrest_time[i]+waiting_time[i];
        avgwaiting_time=avgwaiting_time+waiting_time[i];
         avdturn_around= avdturn_around+turn_around[i];
     printf("%d\t\t\t\t %d\t\t\t\t %d\t\t\t\t%d\n",i+1,burrest_time[i],waiting_time[i],turn_around[i]);
}
avgwaiting_time=avgwaiting_time/proces;
 avdturn_around= avdturn_around/proces;
 printf("the avrage waiting time =%f\n",avgwaiting_time);
 printf("the avrage turn around time =%f",avdturn_around);
 
return 0;
}

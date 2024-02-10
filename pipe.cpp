#include<stdio.h>
#include<string.h>
int main()
{
	int a[2],k,pid;
	char m[50];
	printf("enter a string:");
	scanf("%s",&m);
	k=pipe(a);
	if(k==-1)
	{
		printf("unsuccfull");
		return 1;
	}
	pid=fork();
	if(pid==-1)
	{
		printf("unsucfull");
		return 1;
	}
	if(pid=0)
	{
		close(a[0]);
		write(a[1],m,strlen(m)+1);
		close(a[1]);
	}
	else
	{
		close(a[1])
		read=(a[0],m,50);
		printf("%s",m);
		close(a[0]);
	}
	return 0;
}

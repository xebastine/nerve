//program for bus game
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the last number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("fizbus ");
		}
		else if(i%5==0)
		{
			printf("bus ");
		}
		else if(i%3==0)
		{
			printf("fiz ");
		}
		else
		{
			printf("%d ",i);
		}
	}
}
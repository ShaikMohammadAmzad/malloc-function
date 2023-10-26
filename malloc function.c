// malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("Enter the number of integers to be used:- ");
	scanf("%d\n",&n);
	p=(int*)malloc(n*(sizeof(int)));
	
	if(p==NULL)
	{
		printf("No Memory Available");
		exit(1);
	}
	else
	{
		printf("Memory Allocation was successful\n");
		printf("Enter the values:-\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
	}
	printf("The values are :-\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	
	
	
	return 0;
}

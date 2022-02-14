//linear searching in array
#include<stdio.h>
main()
{
	int a[20]={2,4,8,88,7},num,i;
	printf("enter number to find\n");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		if(a[i]==num)
		{
			printf("element present at %d position",i+1);
		}

	}
	
	
}

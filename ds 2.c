#include<stdio.h>

main()
{
	int a[20]={2,7,71,91,3},i,j,k;
	printf("***********BEFORE SORTING**********\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}

	
	for(i=1;i<=4;i++)
	{
	    int key;
	    key=a[i];
	    j=i-1;

			while(a[j]>key&&j>=0)
			{
			  a[j+1]=a[j];
			  j--;	
			}
			
			a[j+1]=key;

		
	}
	printf("\n");
	printf("********* AFTER SORTING ***********\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}

	
	
}

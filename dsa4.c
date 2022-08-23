#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
main()
{
	int a[20]={3,1,9,7,1,2,4};
	int i;
	printf("********** before sorting **********\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",a[i]);
	}
	
	int max= INT_MIN;
	for(i=0;i<7;i++)
	{
	    if(max<a[i])
	    {
	    	max=a[i];      
		}
	}
	
	int *count=(int*)malloc((max+1)*sizeof(int));
	
	//now intialise all elements of this array zero
	for(i=0;i<=max;i++)
	{
		count[i]=0;
		printf("\n");
		printf("%d\t",count[i]);
	}
	
	for(i=0;i<7;i++)
	{
		count[a[i]]=count[a[i]]+1;
	}
	printf("\n");
	for(i=0;i<=max;i++)
	{
		
		printf("%d\t",count[i]);
	}
	
	int j=0,k=0;
	while(j<=max)
	{
		if(count[j]>0)
		{
			a[k]=j;
			count[j]=count[j]-1;
			k++;
		}
		else
		{
			j++;
		}
	}
	printf("\n\n\n**************after sorting************\n");
	for(i=0;i<7;i++)
	{
		
		printf("%d\t",a[i]);
	}
	
	

}

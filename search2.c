//**********binary searching****************
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[20]={2,4,8,88,7},num,low,mid,high;
	printf("enter number to find\n");
	scanf("%d",&num);
	low=0;
	high=4 ;// high=no. of elements in array-1
	
	if(a[low]==num)
	{
		printf("element is present at %d position in array",low+1);
	}
	else if(a[high]==num)
	{
		printf("element is present at %d position in array",high+1);
	}

	else
	{
	
	while(low<=high)
	{
	  mid= (low+high)/2;
	  if(a[mid]==num)
	  {
	  	printf("element is present at %d position in array",mid+1);
	  	exit (0);
	  }
	  
	  else if(a[mid]<num)
	  {
	  	low=mid+1;
	  }
	  
	  else
	  {
	  	high=mid-1;
	  }

	}    
}
	return 0;
	}

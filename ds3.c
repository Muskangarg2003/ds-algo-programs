// selection sort
#include<stdio.h>

main()
{
	int a[20]={8,0,7,1,3},i,j,n,min_index;
	
	for(i=0;i<4;i++)        //loop for n-1 passes
	{
		min_index=i;
		for(j=i+1;j<5;j++)     
		{
		    if(a[j]<a[min_index])
		   {
			min_index=j;
		   }
	    }
		int temp;
		temp=a[i];
		a[i]=a[min_index];
		a[min_index]=temp;
	   
     }
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
	
}

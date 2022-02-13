// sorting of array in increasing order using bubble sort method
#include<stdio.h>

main()
{
	int a[20]={5,3,8,1,9,4},i,j,k,n;
	printf("*********ARRAY BEFORE SORTING ***********\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);      //to print array
	}
	n=6;   //no. of elements of array
	
	for(j=n;j>0;j--)   //no. of passes =n
	{
		for(k=0;k<j-1;k++)   //no. of comprassion is n-1 for 1st pass .....and decrease by 1 after evry pass
		{
			if(a[k]>a[k+1])
			{
				int temp;
				temp=a[k];
				a[k]=a[k+1];    //here we swap agr agge wala no. bda hr ek pass ke baad jo element last pe hoga vo apni correct position pe hoga
				a[k+1]=temp;
			}
			
		}
	}
	printf("\n\n");
	printf("********* ARRAY AFTER SORTING **********\n");
	
	for(k=0;k<n;k++)
	{
		printf("%d\t",a[k]);     //print new array
	}
	
	}

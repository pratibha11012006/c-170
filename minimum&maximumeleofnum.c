#include<stdio.h>
void main()
{
	int i,ar[10],min,max;
	printf("Enter array:-\n");
	for(i=0;i<=9;i++)
	{
		printf("ar[%d]=",i);	
		scanf("%d",&ar[i]);
	}
	min=ar[0];
	max=ar[0];
	for(i=0;i<=9;i++)
	{
		if(min > ar[i])
		{
			min=ar[i];
		}
		if(max < ar[i])
		{
			max=ar[i];
		}
	}	
	printf("\nMin=%d",min);	
	printf("\nMax=%d",max);	

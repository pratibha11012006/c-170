#include<stdio.h>
void main()
{
	int i,j,k,matrix[3][3],sum=0;
	printf("Enter matrix:-\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&matrix[i][j]);
		}		
	}
	printf("Matrix is:-\n");		
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d	",matrix[i][j]);
		}
		printf("\n");		
	}	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			{
				sum = sum + matrix[i][j];
			}
		}	
	}
	printf("Sum of diagonal is = %d	",sum);
	
}
#include<stdio.h>

void main()
{
    float A,B,sum;
     
       printf("Enter the temp of sensor A\n");
       scanf("%f" ,&A);

        printf("Enter the temp of sensor B\n");
       scanf("%f" ,B);

       sum=A+B;

       printf("total temperature of the sensors is: %2f",sum)
}

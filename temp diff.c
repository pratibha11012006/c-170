# include <stdio.h>

void main()
{
     float A,B,diff;
   
       printf("Enter senesor A temp :\n");
       scanf("%f",&A);
       printf("Enter senesor B temp :\n");
       scanf("%f",&B);

       diff=A-B;
       printf("Total temperatureof the sensors is: %2f", diff);
}
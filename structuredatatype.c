#include<stdio.h>
#include <string.h>   
struct stu      
{   int roll;      
    char name[50];    
}st1,st2;  //declaring variables for structure    
int main( )    
{    
   //store first student information    
   st1.roll=101;    
   strcpy(st1.name, "Amit");   
    
  //store second student information    
   st2.roll=102;    
   strcpy(st2.name, "Manoj");
     
   //printing first student information    
   printf( "student 1 roll : %d\n", st1.roll);    
   printf( "student 1 name : %s\n", st1.name);  
    
   //printing second student information    
   printf( "student 2 roll : %d\n", st2.roll);    
   printf( "student 2 name : %s\n", st2.name);    
   return 0;    
}  

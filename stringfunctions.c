#include<stdio.h>
#include <string.h>   
void main()
{    
	char st[20]={'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l','d', '\0'};    
   	printf("Length of '%s'=: %d\n",st,strlen(st)); 
   	
   	
   	char wd1[10]={'h', 'e', 'l', 'l', 'o', '\0'};    
   	char wd2[10]={'w', 'o', 'r', 'l','d', '\0'};    
   	strcat(wd1,wd2);    
   	printf("\nFirst word is: %s\n",wd1);  
	   
	char st1[20]={'I', 'n', 'd', 'i', 'a', '\0'};    
   	char st2[20];    
   	strcpy(st2,st1);    
   	printf("\nString2 is: %s",st2);      
}   

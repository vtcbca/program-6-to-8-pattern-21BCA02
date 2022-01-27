/* Write a prorgram and print following print
* * * * *
    * * *
	*
date:27/1/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	printf("====================================\n");
	for(i=5;i>=1;i=i-2)
	 {
	   for(j=5-1;j>=i;j--)
	   {
	      printf(" ");
	   }
	   for(a=1;a<=i;a++)
	   {
	      printf("* ");
	   }
	   printf("\n");

	 }
	 printf("\n=====================================");
	 getch();
}
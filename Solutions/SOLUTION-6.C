/* Write a program and print following patten
*
* *
* * *
* * * *
* * * * *
date:26/01/2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a;
	clrscr();
	printf("=====================================================");
	printf("\nEnter value:");
	scanf("%d",&a);
	for(i=0;i<=4;i++)
	 {
	   for(j=1;j<=i;j++)
	    {
	      printf("\t* ");
	    }
	    printf("\n");
	 }
	 printf("=====================================================");
	getch();
}
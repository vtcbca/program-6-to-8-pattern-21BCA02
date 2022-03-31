/* Write a program and print following patten
    1
  2 1 2
3 2 1 2 3
date:27/1/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("=======================================================\n");
	a=1;
	while(a<=3)
	{
	  c=4;
	  while(c>=a)
	   {
	    printf(" ");
	    c--;
	   }
	   b=a;
	   while(b>=1)
	    {
	     printf("%d",b);
	     b--;
	    }
	   b=b+2;
	   while(b<=a)
	   {
	     printf("%d",b);
	     b++;
	   }
	   printf("\n");
	   a++;
	}
	printf("\n=========================================================");
	getch();
}
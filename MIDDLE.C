																												/*
----------------------------------------------------------------------------------------------
				 |||		 FIND MIDDLE VALUE IN USING THREE VALUE        ||
------------------------------------------------------------------------------------------																																 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n\t\t \1 \2 \3 Middel Value \3 \2 \1");    //titale
	printf("\n\n Enter Any Number A:-");
	scanf("%d",&a);
	printf("\n   Enter Any Number B:-");
	scanf("%d",&b);
	printf("\n   Enter Any Number C:-");
	scanf("%d",&c);

	if(a==b||b==c||c==a)
	{
			if(a==b)
			{
					printf("\nA=B Is Same %d=%d",a,b);
			}
			if(b==c)
			{
					printf("\nB=C Is Same %d=%d",b,c);
			}
			if(c==a)
			{
					printf("\nC=A Is Same %d=%d",c,a);
			}
	}
	else if(a>b&&a<c||a<b&&a>c)
	{
			printf("\nA Value Is Middle =%d",a);
	}
	else if(b>a&&b<c||b<a&&b>c)
	{
			printf("\nB Value Is Middle =%d",b);
	}
	else
	{
			printf("\nC Value Is Middle =%d",c);
	}

			getch();
}
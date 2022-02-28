#include<stdio.h>
#include<conio.h>

int main()
{
	int l;
	int b;
	int Area;
	
	printf("Enter the length: ");
	scanf("%d",&l);
	
	printf("Enter the breadth: ");
	scanf("%d",&b);
	
	Area=l*b;
	
	printf("The area of rectangle = %d",Area);
	getch();
}

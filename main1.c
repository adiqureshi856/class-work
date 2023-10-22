#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int marks;
	printf("\n Enter your marks");
	scanf("%d",&marks);
	
	if(marks>32)
	{
		printf("\n Congratulation");
		printf("\n You have passed ");
	}
	
	else 
	{
		printf("\n You have failed ");
	}
	
	
	getch();
	
	return 0;
}

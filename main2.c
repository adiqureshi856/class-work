#include <stdio.h>
#include <stdlib.h>
int main() {
	
			char grade ;
			printf("Enter your grade ");
			scanf("%c",&grade);
			switch(grade){
			case 'A':
				{
				printf("\n Excellent");
				break;
}
	case 'B':
		{
		printf("\nWell Done ");
		break;
	}
		case'C':{
			
		}
		case'D':{
			
		
			printf("\n satisfactory");
			break;
		}
		case'F':{
		
		
			printf("\n Poor Performance "); break;
		}
			default:{
				break;
			
				printf("\n Invalid grade"); break;
			}
		}
				getch();
				return 0;
}

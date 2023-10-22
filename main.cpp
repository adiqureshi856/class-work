#include <iostream>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int marks ;
	cout<<"Enter the marks";
	cin>> marks;
	
	if (marks>=33)
	{
		cout<<"You have passed "<<endl;
	}
	
	getch();
	return 0;
}

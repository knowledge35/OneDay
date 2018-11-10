#include <stdio.h>

int main() {

	int today, birthday;
	printf("Enter the date of today:");
	scanf("\n%d",&today);
	printf("Enter your birthday:");
	scanf("\n%d",&birthday);
	printf("Your age is:%d",today-birthday);
	getchar();



}
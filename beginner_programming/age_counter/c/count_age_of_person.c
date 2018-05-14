#include<stdio.h>

int main()
{
	int birthMonth, birthYear;
	int currentMonth, currentYear;
	int ageYear, ageMonth;
	
	printf("\n\n\t\t\tCount the age person\n\n");
	printf("Enter Your Birth Year(Eg:1989):");
	scanf("%d",&birthYear);
	
	printf("\n\nEnter Your Birth Month(Eg:7):");
	scanf("%d",&birthMonth);
	
	printf("\nEnter The Current Month(Eg:7):");
	scanf("%d",&currentMonth);
	
	printf("\nEnter The Current Year(Eg:2010):");
	scanf("%d",&currentYear);
	
	ageYear = currentYear - birthYear;
	ageMonth = currentMonth - birthMonth;
	
	printf("\n\n\t\tYour Age is %d Years And %d Months ", ageYear, ageMonth);
	
	return 0;
}

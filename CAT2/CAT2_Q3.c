// A program to prompt the user to enter hours and hourly wages 

#include <stdio.h>
int main()
{
	//initializing variables
	float hours;
	float hourly_wages;
	float overtime;
	float total_overtime;
	float total_hours;
	
	//prompt the user to enter variables
	
	printf("enter hours worked for the week :");
	scanf("%f",&hours);
	
	//using if statement for hours over 40
	if(hours > 40){
		overtime = hours - 40;
	
	
	//calculating total_overtime and total_hours
	total_overtime = overtime * 0.5;
	total_hours = total_overtime + 40;
	}
	
	//prompt the user to enter hourly_wages
	printf("enter hourly_wages :");
	scanf("%f",&hourly_wages);
	
	//calculating gross_pay using hourly_wages and total hours
	
	float gross_pay;
	gross_pay = total_hours * hourly_wages;
	printf("Gross pay   :%.2f\n",gross_pay);
	
	//calculating net_tax
	
	float tax1;
	float tax2;
	float net_pay;
	float total_tax;
	//using if statement
	if(gross_pay == 600){
		tax1 = 600 * 0.15;
		net_pay = gross_pay - tax1;
		printf("Net pay     :%.2f\n",net_pay);
	}
		
	
	if(gross_pay > 600){
		tax2 = (gross_pay - 600) * 0.2;
		net_pay =gross_pay - (tax2 + tax1);
		printf("Net pay     :%.2f\n",net_pay);
		total_tax=tax2+tax1;
		printf("Total tax   :%.2f\n" ,total_tax);
	}

		
	
	
	return 0;
}
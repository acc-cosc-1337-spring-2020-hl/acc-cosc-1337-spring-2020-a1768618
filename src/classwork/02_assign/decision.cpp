//Write the function code that returns the product of hours and hourly_rate.
#include <iostream>

double OT_PAY_RATE = 1.5;
double gross_pay(double hours, double hourly_rate)
{

	if (hours <= 40)
	{
		double gross = hours * hourly_rate;
		return gross;
	}

	if (hours < 40)
	{
		double gross = hours * OT_PAY_RATE;
		return gross;
	}

	return 0;
}


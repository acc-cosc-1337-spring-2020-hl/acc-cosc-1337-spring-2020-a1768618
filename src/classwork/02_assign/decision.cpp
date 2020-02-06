//Write the function code that returns the product of hours and hourly_rate.
#include <iostream>


double gross_pay(double hours, double hourly_rate)
{
	double OT_PAY_RATE = 1.5;
	double gross;

	if (hours <= 40)
	{
		gross = hours * hourly_rate;
	}
	else
	{
		gross = 40 * hourly_rate + (hours - 40) * OT_PAY_RATE * hourly_rate;
	}

	return gross;
}


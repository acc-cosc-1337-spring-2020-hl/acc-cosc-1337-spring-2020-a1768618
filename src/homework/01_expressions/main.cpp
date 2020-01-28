//write include statements
# include "expressions.h"
# include <iostream>


//write namespace using statement for cout
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num1 = 10;
	int num2 = 10;

	cout << multiply_numbers(num1, num2) << "\n";

	return 0;

}

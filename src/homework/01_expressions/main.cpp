//write include statements
# include "expressions.h"
# include <iostream> // use standard library


//write namespace using statement for cout
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int result = multiply_numbers(10, 10);
	//int num1 = 10;
	//int num2 = 10;

	//cout << multiply_numbers(num1, num2) << "\n";
	cout << "Result: " << result;

	return 0;

}

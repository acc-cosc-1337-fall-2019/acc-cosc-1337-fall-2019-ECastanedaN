//#write includes statements
#include "loops.h"
//write using statements for cin and cout
#include <iostream>

using std::cout;
using std::cin;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	auto user_choice = 'y';
	int num = 0;
	int result = 0;
	
	do
	{
		cout << "Enter a number: ";
		cin >> num;
		result = factorial(num);
		cout << "The factorial of" << num << "is" << result;

		cout << "Would you like to enter another number? y or n";
		cin >> user_choice;


	} while (user_choice == 'y' || user_choice == 'Y');

	return 0;
}
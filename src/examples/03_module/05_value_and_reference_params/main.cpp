#include<iostream>

int main() 
{
	int num = 5;
	std::cout << "Address: " << &num <<"\n";
	std::cout << "Value: " << num;

	int &num_ref = num;
	std::cout << num_ref;



	return 0;
}
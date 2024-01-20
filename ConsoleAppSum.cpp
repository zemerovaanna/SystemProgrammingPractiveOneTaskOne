#include <iostream>

int main()
{
	int number = 2;
	std::cout << "Enter number: ";
	std::cin >> number;

	while (number < 1)
	{
		std::cout << "The number cannot be negative, please enter again: ";
		std::cin >> number;
	}

	int sum = 0;
	for (int i = 1; i <= number; i++) {
		sum = sum + i;
	}
	std::cout << "The sum of all numbers from 1 to " << number << " = " << sum;
}
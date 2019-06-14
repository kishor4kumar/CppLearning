#include <string>
#include <iostream>

void checkStringBehaviour()
{
	std::string input;

	std::cout << "Enter Data: ";
	std::cin >> input;

	std::cout << "\n";
	std::cout << "Data Entered: ";
	std::cout << input;

	std::cout << "\n";
	std::cout << "Enter Data: ";
	std::getline(std::cin, input);

	std::cout << "\n";
	std::cout << "Data Entered: ";
	std::cout << input;

	std::cin >> input;
}
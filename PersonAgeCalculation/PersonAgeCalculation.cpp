// PersonAgeCalculation.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

int main(void)
{
	//typedef defined and declaring
	typedef unsigned short int(USHORT);
	USHORT FirstPersonAge;
	USHORT SecPersonAge;

	std::string Greetings(" This program calculates the age difference between two people. ");
	std::cout << Greetings << std::endl;

	//Propts users full name
	std::cout << " What is the name of the first person?" << std::endl;
	std::string FirstPersonName;
	std::cin >> FirstPersonName;
	// Prompts users age and outputs the persons age
	std::cout << " How old is " << FirstPersonName << " ? " << std::endl;
	std::cin >> FirstPersonAge;

	std::cout << " What is the name of the second person?" << std::endl;
	std::string SecPersonName;
	std::cin >> SecPersonName;

	std::cout << " How old is " << SecPersonName << " ? " << std::endl;
	std::cin >> SecPersonAge;

	//Declare and calculate the differnce
	int sub;
	sub = FirstPersonAge - SecPersonAge;

	//  If statements for result.
	if (FirstPersonAge > SecPersonAge)
		std::cout << " Result: " << FirstPersonName << " is " << sub << " years older than " + SecPersonName << " . ";
	if (FirstPersonAge < SecPersonAge)
		std::cout << " Result: " << SecPersonName << " is " << sub << " years older than " + FirstPersonName << " . ";
	if (FirstPersonAge == SecPersonAge)
		std::cout << " Result: " << FirstPersonName << " and " << SecPersonName << " are the same age. ";

	std::cout << std::endl;

	system("pause");
	return 0;
}
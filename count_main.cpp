// count_main.cpp : Этот файл содержит функцию "main".
//
#include "count_Header.h"






int main()
{
	//setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: да" << std::endl;
	std::string read;
	std::cin >> read;
	int initialValue = 1;
	if (read == "да" || read == "yes")
	{
		std::cout << "Введите начальное значение счётчика: " << std::endl;
		std::cin >> initialValue;
	}
	Counter count{};
	
	count.initial(initialValue);
	

	std::cout << "Enter command (+, -, =, x): ";
	std::string command;
	std::cin >> command;

	while (command != "x") {
		if (command == "+") {
			count.increment();
		}
		else if (command == "-") {
			count.decrement();
		}
		else if (command == "=") {
			count.print();
		}

		std::cout << "Enter command (+, -, =, x): ";
		std::cin >> command;
	}

	std::cout << "Good bye!" << '\n';


	return 0;
}



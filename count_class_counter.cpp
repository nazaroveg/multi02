#include "count_Header.h"
#include <iostream>
#include <Windows.h>
#include <string>



class  Counter;




	void Counter :: print()
	{
		std::cout << "текущее значение счётчика = " << present_value << std::endl;
	}
	void Counter:: initial(int initialization_value)
	{

		present_value = initialization_value;
	}
	void Counter:: increment()
	{
		present_value++;
	}
	void Counter:: decrement()
	{
		present_value--;
	}




	






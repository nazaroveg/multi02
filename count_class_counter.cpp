#include "count_Header.h"
#include <iostream>




void Counter :: print()
	{
		std::cout << "текущее значение счётчика = " << present_value << std::endl;
	}
	
	void Counter:: increment()
	{
		present_value++;
	}
	void Counter:: decrement()
	{
		present_value--;
	}




	






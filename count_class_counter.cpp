#include "count_Header.h"

class  Counter;




	void Counter :: print()
	{
		std::cout << "������� �������� �������� = " << present_value << std::endl;
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




	






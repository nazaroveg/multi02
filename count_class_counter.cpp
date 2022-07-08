#include "count_Header.h"




class  Counter;

	




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

	void Counter::inital_pres(int present_value)
	{
		this->present_value = present_value;
	}

	void Counter::initial(int pres_val)
	{
		inital_pres(pres_val);
	}


	






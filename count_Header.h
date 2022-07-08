#pragma once
#include <iostream>
#include <Windows.h>
#include <string>

class Counter 
{
public:
	
	
	void print();
	void initial(int);
	void increment();
	void decrement();
private:
	int present_value ;  
	int create_default; 
	int initialization_value;  
	void inital_pres(int );
	
};

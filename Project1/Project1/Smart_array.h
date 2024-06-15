#pragma once
#include <iostream>
class Smart_array
{
private:
	int size;
	int logical_size;
	int* array;
	Smart_array(const Smart_array&);
	Smart_array& operator=(const Smart_array&);
public:
	Smart_array(int aSize);
	bool add_element(int element);
	int get_element(int index);
	~Smart_array();
	//Smart_array(const Smart_array&) = delete;
	//Smart_array& operator=(const Smart_array&) = delete;
};


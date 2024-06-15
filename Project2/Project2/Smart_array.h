#pragma once
#include <iostream>
class Smart_array
{
private:
	int size;
	int logical_size;
	int* array;
public:
	Smart_array(int aSize);
	bool add_element(int element);
	int get_element(int index);
	bool copy(const Smart_array& smart_array);
	~Smart_array();
	Smart_array(const Smart_array& smart_array);
	Smart_array& operator=(const Smart_array&);
};


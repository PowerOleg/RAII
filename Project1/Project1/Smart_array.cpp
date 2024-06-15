#include "Smart_array.h"
#include <string>

Smart_array::Smart_array(int aSize) : size{aSize}
{
	this->array = new int[size];
	logical_size = 0;
}

Smart_array::~Smart_array()
{
	delete[] this->array;
}

bool Smart_array::add_element(int element)
{
	if (this->logical_size < this->size/*actual_size*/)
	{
		this->array[this->logical_size++] = element;
		//this->logical_size++;
	}
	else
	{
		int old_size = this->size;
		this->size *= 2;
		int* new_arr = new int[this->size];
		for (int i = 0; i < old_size; i++)
		{
			new_arr[i] = this->array[i];
		}
		delete[] this->array;
		this->array = new_arr;
		this->array[this->logical_size++] = element;
		//this->logical_size++;
	}
	return true;
}

int Smart_array::get_element(int index)
{
	if (index >= this->logical_size || index < 0)
	{
		std::string index_string = std::to_string(index);
		throw std::runtime_error("No element by index " + index_string);
	}
	return this->array[index];
}
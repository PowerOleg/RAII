#include <iostream>
#include "Smart_array.h"

int main(int argc, char** argv)
{
	try
	{
		Smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		std::cout << arr.get_element(1) << std::endl;

		Smart_array arr2(arr);
		Smart_array arr3 = arr;

	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
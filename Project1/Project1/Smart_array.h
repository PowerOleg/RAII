#pragma once
class Smart_array
{
private:
	int size;
public:
	Smart_array(int aSize);
	bool add_element(int element);
	int get_element(int index);
	~Smart_array();
};


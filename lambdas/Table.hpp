#pragma once
#include <iostream>




struct table{

	int* vals;
	char* c_vals;
	size_t size;

	//inherit child 
	table(std::initializer_list<int> nums, std::initializer_list<char> characters) {
		if (nums.size() != characters.size()) {
			std::cerr << "error, init list is not equal\n";
			exit(2);
		}

		vals = new int[nums.size()];
		c_vals = new char[characters.size()];
		size = nums.size();
		int count = 0;
		for (auto iter : nums) {
			vals[count] = iter;
			count++;
		}
		count = 0;
		for (auto iter : characters) {
			c_vals[count] = iter;
			count++;
		}

	}
	
	

};



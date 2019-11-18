#pragma once

#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

#include "stovals.h"

using namespace std;

bool isCompatible(string str, unordered_map<int, string> result, int x, int y) {

	auto input = stovals(str);
	bool check = true;
	if (input[0]< 0 || input[0]>x || input[1]<0 || input[1]>x || input[2]<0 || input[2]>y || input[3]<0 || input[3]>y) //checking if it fits the dimensions of the grid
		check = false;

	for (auto iter = result.begin(); iter != result.end(); iter++) { //comparing current input with the values stored so far
		auto comparator = stovals(iter->second);

		if (input[0] >= comparator[0] && input[1] <= comparator[1]) { //checking if x coords fit inside the currently checked rectangle
			if (input[2] >= comparator[2] && input[3] <= comparator[3]) { //checking if y also fits inside

			}
		}

		else if (input[0] <= comparator[0] && input[1] >= comparator[1]) { //checking if x coords fit outside the currently checked rectangle
			if (input[0] <= comparator[0] && input[1] >= comparator[1]) { //checking if y also fits outside

			}
		}



	}

	return check;
}
#pragma once
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

#include "isCompatible.h"

using namespace std;

auto validateInputs(unordered_map<int, string>& inputs, int& x, int& y) {
	unordered_map<int, string> result;

	for (auto itr = inputs.begin(); itr != inputs.end(); itr++) {
		if (isCompatible(itr->second, result, x, y) == true) {
			result.insert(*itr);
		}
	}
	return result;
}
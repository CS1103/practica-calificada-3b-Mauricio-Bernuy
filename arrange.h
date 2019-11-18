#pragma once
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

#include "stovals.h"

void arrange(unordered_map<int, string> input) {
	for (auto iter = input.begin(); iter != input.end(); iter++) {
		stovals(iter->second);
	}
}
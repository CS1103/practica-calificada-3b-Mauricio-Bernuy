#pragma once
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>

#include "stovals.h"

using namespace std;

auto compareInput = [](std::pair<int, string> const& a, std::pair<int, string> const& b){
	auto i1 = stovals(a.second);
	auto i2 = stovals(b.second);
	
	return i1[0] != i2[0] ? i1[0] < i2[0] : i1[1] != i2[1] ? i1[1] < i2[1] : i1[2] != i2[2] ? i1[2] < i2[2] : i1[3] < i1[3];
};

void arrange(unordered_map<int, string> &input) {

	sort(input.begin(), input.end(), compareInput);
}
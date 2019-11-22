#pragma once
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

auto stovals(string s) {
	vector<int> r;
	char t1;
	int x1, x2, y1, y2;
	stringstream values(s);
	values >> t1 >> x1 >> y1 >> x2 >> y2;
	x2 = x2 + x1 - 1;
	y2 = y2 + y1 - 1;
	r.push_back(x1);
	r.push_back(x2);
	r.push_back(y1);
	r.push_back(y2);
	return r;
};
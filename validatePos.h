#pragma once
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

auto stovals(string s, vector<int> r) {
	char t1;
	int x1, x2, y1, y2;
	stringstream values(s);
	values >> t1 >> x1 >> x2 >> y1 >> y2;
	x2 = x2 + x1 - 1;
	y2 = y2 + y1 - 1;
	r.push_back(x1);
	r.push_back(x2);
	r.push_back(y1);
	r.push_back(y2);

	return r;
};

bool isCompatible(string str, unordered_map<int, string> result) {
	char t1;
	int xstart, xend, ystart, yend;
	stringstream values(str);
	values >> t1 >> xstart >> xend >> ystart >> yend;
	xend = xend + xstart - 1;
	yend = yend + ystart - 1;

	return true;
}

void validateInputs(unordered_map<int, string>& inputs, int& x, int& y) {
	unordered_map<int, string> result;

	vector<int> xstart, xend, ystart, yend;

	for (auto itr = inputs.begin(); itr != inputs.end(); itr++)	{
		char t1;
		int t2, t3, t4, t5;

		if (t1 == 'A') {
			if(isCompatible(itr->second, result) == true){

		}

}
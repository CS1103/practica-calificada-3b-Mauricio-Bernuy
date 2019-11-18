#pragma once
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;
void writeOutput(unordered_map<int, string> input) {
	ofstream output;
	output.open("rectangulos.out");

	for (auto it = input.begin(); it != input.end(); it++) {
		output << "A " << it->second << endl;
	}
	output.close();
}
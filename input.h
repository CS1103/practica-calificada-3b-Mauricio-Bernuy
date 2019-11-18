#pragma once

#include <fstream>
#include <iterator>
#include <vector>
#include <string>

using namespace std;

int receiveInput() {
	ifstream input("rectangulos_example.in");
	int n, x, y;
	string config;
	getline(input, config);
	istringstream configvals(config);
	configfals >> n >> x >> y;


}
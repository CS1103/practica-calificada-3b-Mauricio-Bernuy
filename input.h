#pragma once
using namespace std;

void receiveInput(unordered_map<int,string>&inputs, int &x, int &y) {
	ifstream input("rectangulos_example.in");
	int n;
	string line;
	getline(input, line);
	stringstream configvals(line);
	configvals >> n >> x >> y;
	//cout << n << x << y;
	for (auto i = 0; i < n; i++) {
		getline(input, line);
		inputs[i] = line;
	}

	input.close();
}
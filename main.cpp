#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

#include "input.h","validatePos.h"

using namespace std;

int main() {
	unordered_map<int, string> inputs;
	int sizex = 0;
	int sizey = 0;

	receiveInput(inputs, sizex, sizey);
	
	cout << inputs.size() << sizex << sizey << endl;
	for (auto itr = inputs.begin(); itr != inputs.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}


	

	cin >> sizex;

}
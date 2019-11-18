#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

#include "input.h"
#include "validateInputs.h"
#include "arrange.h"
#include "writeOutput.h"

using namespace std;

int main() {
	unordered_map<int, string> inputs;
	int sizex, sizey;

	receiveInput(inputs, sizex, sizey);
	auto result = validateInputs(inputs, sizex, sizey);
	arrange(result);
	
	writeOutput(result);
}
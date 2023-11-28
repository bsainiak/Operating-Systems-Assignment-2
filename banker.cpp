//Brandon Sainiak Operating Systems Assignment 2
//Banker's Algorithm Implementation

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

const int processes = 5;
const int resources = 3;

int fillMatrix(int [processes][resources], vector<int>&);

int main() {
   	vector<int> info;	//Creates vector that takes information from file
	char ch;
	std::ifstream input ("input.txt");
	if(!input.is_open()) {
		std::cout << "Unable to open file\n";	//Checks to make sure file opened
		return 0;
	}
}
int fillMatrix(int matrix[processes][resources], vector<int>& info) {	//Function to fill a matrix
	int i = 0;
	int j = 0;
	while(i < processes) {
		j = 0;
		while(j < resources) {
			matrix[i][j] = info.back();
			info.pop_back();
			j++;
		}
		i++;
	}
	return 0;
}

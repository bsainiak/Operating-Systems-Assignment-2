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
	input >> ch;
	while(!input.eof()) {	//Reads until end of file
		if(ch == ':') {
			input >> ch;
			while(ch != ';') {		//Moves all the characters that are in between : and ; into the vector
				info.push_back(static_cast<int>(ch - '0'));	//Subtracts '0' to make the conversion from character to integer correct for the numbers
				input >> ch;
			}
		}
		input >> ch;
	}
	std::cout << "\n";
	input.close();		//Closes file

	reverse(info.begin(),info.end());	//Reverses vector of information
	
	int allocated[processes][resources];	//Creates the matrices for allocated, max, needed, and an array for available
	int max[processes][resources];
	int needed[processes][resources];
	int available[resources];

	fillMatrix(allocated, info);	//Fills in allocated matrix
	fillMatrix(max, info);		//Fills in max matrix

	int a = 0;
	while(a < resources) {
		available[a] = info.back();	//Puts the rest of the info in vector into available resources array
		info.pop_back();
		a++;
	}

	int b = 0;
	int c = 0;
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

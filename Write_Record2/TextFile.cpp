#include "stdafx.h"
#include "stdio.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

#include "TextFile.h"

TextFile::TextFile()
{
	printf("In TextFile::TextFile\n");
}

TextFile::~TextFile()
{
}


void TextFile::displayRecords()
{
	string nextToken;

	printf("In TextFile::displayRecords\n");
	ifstream inFile("test.txt");
	if (inFile.fail()) {
		cerr << "Unable to open file for writing." << endl;
	}

	while (inFile >> nextToken) {
		cout << "Token: " << nextToken << endl;
	}
	inFile.close();
}

void TextFile::writeOutput()
{
	printf("In TextFile::writeOutput\n");
	ofstream outFile("test2.txt");
	if (outFile.fail()) {
		cerr << "Unable to open file for writing." << endl;
	}
	outFile << "Value" << endl;
	outFile.close();
}
// Write_Record2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

#include "TextFile.h"

int main()
{
	string userInput;
	TextFile tfile;

	printf("Hello World\n");
/*	tfile.displayRecords(); */
	tfile.writeOutput();
	cin.clear();
	getline(cin, userInput);
/*	return 0; */
}


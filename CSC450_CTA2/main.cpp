/*
 * main.cpp
 *
 *  Created on: Oct 20, 2024
 *      Author: letai
 */
#include <iostream>
#include <string>

const size_t max = 50; // maximum size for strings that are too large

// main program
int main() {
	// using std::strings prevents buffer overflow vulnerabilities as we have discussed in class
	std::string string1, string2, string3;

	// taking two strings 3 times
	for (int i = 1; i < 4; i++) {
		// getting first string
		std::cout << "Enter first string up to "<< max << " characters( " << i << " of 3): ";
		std::getline(std::cin, string1);

		// checking input length
		if (string1.length() > max) {
			std::cout << "String length is too long. Max string length is " << max << " characters." << std::endl;
			continue;
		}

		// getting second string
		std::cout << "Enter second string up to "<< max << " characters( " << i << " of 3): ";
		std::getline(std::cin, string2);

		// checking input length
		if (string2.length() > max) {
			std::cout << "String length is too long. Max string length is " << max << " characters." << std::endl;
			continue;
		}

		// concatenating the strings
		string3 = string1 + string2;

		// printing the concatenated string
		std::cout << "Concatenated string: " << string3 << std::endl << std::endl;
	}

    return 0;
}





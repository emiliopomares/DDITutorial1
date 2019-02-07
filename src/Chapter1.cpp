//
//  Chapter1.cpp
//
//  Created by Emilio Pomares on Feb/07/2019.
//  Copyright © 2018 DDI. All rights reserved.
//

#include <iostream>

int main(int argc, char **argv) {

	int a;
	float b = 9.4;
	std::string c = "Some boring text";

	a = 9;

	std::cout << "Roses are red, a is an integer and its value is: " << a << "\n";
	std::cout << "Violets are blue, b is a float and its value is: " << b << "\n";
	std::cout << "This is stupid, c is a string and its value is: " << c << "\n";
	a = a + 1;

	std::cout << "Guess what? The value of a is now: " << a << "\n";

}

/*

	GeometryFun
	Charlie Welsh
	2020-10-26
	It's complicated*
	
	*So on macOS (where I'm writing this), I'm using Panic's Nova editor to 
	write code, and I'm using CMake to generate a Makefile, then I run 
	make and then run the result. In terms of building for Windows/Linux 
	(and proper builds for Mac), I have a GitHub Action set up that runs CMake 
	and then make, so I get builds for Windows with MinGW, Windows with MSVC,
	Mac with Clang, and Linux with GCC.
	
	Takes user input and sPIts out various stats about a circle with a diameter 
	of the user's input or a square with the side length of the user's input. 

*/


#include <iostream>
#include <math.h> 
#include <iomanip>

const float PI = 3.1416;

int main()
{
	int userInput;
	
	std::cout << "Please enter a whole number: ";
	std::cin >> userInput; 
	// This just prints something if the user doesn't put in a number instead of crashing. 
	if (!std::cin.good()) {
		std::cout << "That wasn't a whole number." << std::endl;
	} else {
		int squarePerimeter = userInput * 4;
		int squareArea = userInput * userInput;
		
		float circleRadius = userInput / 2.0;
		float circleCircumference = 2 * PI * circleRadius;
		float circleArea = PI * (circleRadius * circleRadius);
		
		int trianglePerimeter = userInput * 3;
		float triangleArea = (sqrt(3.0) / 4.0) * pow(userInput, 2);
		
		std::cout << std::fixed;
		std::cout << std::setprecision(3);
		
		std::cout << "A square with side length of " << userInput << "\n" 
			<< "\t" << "has a perimeter of " << squarePerimeter << "\n"
			<< "\t" << "has an area of " << squareArea << "\n" << std::endl;
		
		std::cout << "A circle with a diameter of " << userInput << "\n"
			<< "\t" << "has a radius of " << circleRadius << "\n" 
			<< "\t" << "has a circumference of " << circleCircumference << "\n" 
			<< "\t" << "has an area of " << circleArea << std::endl;
		
		std::cout << "An equilateral triangle with side length of " << userInput << "\n"
			<< "\t" << "has a perimeter of " << trianglePerimeter << "\n" 
			<< "\t" << "has an area of " << triangleArea << std::endl;
	}
}

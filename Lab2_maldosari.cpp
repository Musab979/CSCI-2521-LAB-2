/**
* @file Lab2_maldosarii
* @Author Musab Aldosari
* @date 2026-09-14
* @brief A program to calculate the perimeter of a rectangle from user input.
*/

#include <iostream>
using namespace std;

int main() {
	// Step#1 - Declare variables
	double length = 0.0;
	double width = 0.0;
	double perimeter = 0.0;

	// Step#2 Display introductory message
	cout << "This application calculates the perimeter of a rectangle." << endl;
	// Step#3 Gedt user input for length and width
	cout << "Enter the length of the rectangle: " << endl;
	cin >> length;
	cout << "Enter the width of the rectangle: "  << endl;
	cin >> width;
	// Step#4 Calculate the perimeter
	perimeter = 2 * (length + width);
	// Step#5 Display the result
	cout << "The perimeter of the rectangle is: " << perimeter << endl;
	return 0;
}
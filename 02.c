#include <stdio.h>

void main() {
	// Create variables
	int myNum = 5;             // Integer (whole number)
	int myNumbers[] = {25, 50, 75, 100};
	float myFloatNum = 5.99;   // Floating point number
	char myLetter = 'D';       // Character
	char greetings[] = "Hello World!";

	// Print variables
	printf("%d\n", myNum);
	printf("%d\n", myNumbers[0]);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);
	printf("%s\n", greetings);

	// When you declare a constant variable, it must be assigned with a value:
	// Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers:
	const int minutesPerHour = 60;
	const float PI = 3.14;

	// Declaring multiple variables on single line
	int x = 5, y = 6, z = 50;
	printf("%d", x + y + z);

}

#include <stdio.h>

int main() {
	int day = 7;

	switch (day) {
	  case 1:
		printf("Monday");
		break;
	  case 2:
		printf("Tuesday");
		break;
	  case 3:
		printf("Wednesday");
		break;
	  case 4:
		printf("Thursday");
		break;
	  case 5:
		printf("Friday");
		break;
	  case 6:
		printf("Saturday");
		break;
	  case 7:
		printf("Sunday");
		break;
	  default:
		printf("Please chooose 0 to 7 value for day input number");

		// Below `break` statement is optional but recommended when default case is not the last one in the switch statement prevent unintentional fall-through. Note: While it's not strictly necessary to use a `break` statement in default case though it is a good practice.
		break; 
	}
	return 0;
}


#include <cstdio>

int main()
{
	int number;
	int numberManipulator;
	int lastDigit;
	int middleDigits = 0;
	int mult = 100;

	printf("Enter a number with 2 or more digits:\n");
	scanf_s("%i", &number);

	if (number > 9 || number < -9)
	{
		lastDigit = number % 10;
		numberManipulator = number - lastDigit;

		while (numberManipulator - (numberManipulator % mult) > 0 || numberManipulator - (numberManipulator % mult) < 0)
		{
			middleDigits += numberManipulator % mult;
			numberManipulator = numberManipulator - (numberManipulator % mult);
			mult *= 10;
		}

		numberManipulator /= (mult / 10);
		number = lastDigit * (mult / 10) + middleDigits + numberManipulator;
		printf("Your new number is %i", number);
	}

	else
	{
		printf("ERROR. Please enter a number with 2 or more digits.");
	}

	return 0;
}
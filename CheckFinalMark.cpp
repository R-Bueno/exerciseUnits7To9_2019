#include <iostream>

using namespace std;

int main()
{
	int number1, number2;
	int increment = 0;
	int decrement = 0;

	cout << "Enter 10 positive numbers:" << endl;
	for (int i = 1; i <= 10; i++)
	{
		do
		{
			cin >> number1;
			if (number1 < 0)
				cout << "Enter the number again:" << endl;
			/*If u enter all numbers in the same lane there's no chance to
				correct it before u press enter button.*/
		} while (number1 < 0);
		if (i > 1)
		{
			if (number2 < number1)
				increment++;
			else if (number2 > number1)
				decrement++;
		}
		number2 = number1;
	}
	cout << "Increments:" << increment << " Decrements:" << decrement << endl;

	return 0;
}

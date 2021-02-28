#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
//Write a program that prompts the user to input a positive integer. 
//It should then output a message indicating whether the number is a 
//prime number. (Note: An even number is prime if it is 2. An odd integer is prime if it is not divisible by any odd integer less than or equal to 
//the square root of the number.)

int main()
{
	double doubleNumber, doubleSquareRootOfNumber;
	int container = 0, counter = 1, number, squareRootOfNumber;
	bool flag = false, prime = false;

	cout << "Please enter a positive integer: "; 

	cin >> doubleNumber; 

	cout << endl;

	doubleSquareRootOfNumber = sqrt(doubleNumber); 

	number = (int)doubleNumber; 
	squareRootOfNumber = (int)doubleSquareRootOfNumber; 

	while(flag != true) 
	{
		if (number == 1 || number == 2)
		{
			cout << "The number " << number << " is a prime number..." << endl << endl;
			flag = true;
			break;
		}

		if (number > 2)
		{
			while(counter <= squareRootOfNumber)
			{
				counter++;
				container = number % counter;

				if(container == 0)
				{
					prime = false;
					flag = true;
					break;
				}
				else
				{
					prime = true;
					flag = true;
					break;
				}
			}

			if(prime == true)
			{
				cout << "The number " << number << " is a prime number..." << endl << endl;
			}

			if(prime == false)
			{
				cout << "The number " << number << " is not a prime number..." << endl << endl;
			}
		}
	}

	system("PAUSE");

	return 0;
}

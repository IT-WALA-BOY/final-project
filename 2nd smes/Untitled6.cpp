#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	int *numptr;
	num1 =100;
	num2 = num1;
	numptr = &num1;
	
	cout<< num1 << endl;
	cout << *numptr << endl;
}

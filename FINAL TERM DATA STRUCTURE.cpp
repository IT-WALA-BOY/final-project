#include <iostream>

using namespace std;

void SWAPPING(int *a, int *b) 
{
  	int temporary = *a;
  	*a = *b;
  	*b = temporary;
}

void PRINT_ARRAY(int array[], int size) 
{
  	for (int i = 0; i < size; i++) 
	{
    	cout << array[i] << " ";
  	}
  	cout << endl;
}

void SELECTION_SORT(int array[], int size) 
{
  	for (int count = 0; count < size - 1; count++) 
	{
    	int minimum_index = count;
    	for (int i = count + 1; i < size; i++) 
		{
      		if (array[i] < array[minimum_index])
      		{
      			minimum_index = i;
			}
    	}
    	SWAPPING(&array[minimum_index], &array[count]);
  	}
}

int main() {
  	int array[] = {125,0,695,3,-256,-5,214,44,55};
  	int size = sizeof(array) / sizeof(array[0]);
  	SELECTION_SORT(array, size);
  	cout << "SORTED ARRAY : " << endl;
  	PRINT_ARRAY(array, size);
}

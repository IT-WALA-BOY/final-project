#include <iostream>
using namespace std;
int main()
{
	double number[4] = {};
	double min = number[0];
	for (int i =1; i<3; i++){
		if(number[i] < min){
			min=number[i];
		}
	}
cout<<min<<endl;
return 0;
}

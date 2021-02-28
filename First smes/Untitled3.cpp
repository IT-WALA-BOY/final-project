#include <iostream>
using namespace std;
int main()
{
	double number[3] = {1, 2, 3};
	double sum=0;
	for (int i=0; i<3; i++)
{
	sum=sum + number[i];
}
cout<<"Sum of numbers: "<<sum<<endl;
cout<<"Average of all numbers: "<<sum/3<<endl;
return 0;
}

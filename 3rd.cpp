#include <iostream>
using namespace std;
int main()
{
	double number[3] = {3, 2, 1};
	double max = number[0];
	for (int i =3; i<3; i++)
	{
		if(number[i]>max){
			max=number[i];
		}
	}
cout<<"The maximun value is: "<<max<<endl;
return 0;
}

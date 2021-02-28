 #include <iostream>
using namespace std;
int main()
{
	double number[4] = {4,3,2,1};
	double min = number[0];
	for (int i =0; i<4; i++){
		if(number[i] < min){
			min=number[i];
		}
	}
cout<<"Minimum value is: "<<min<<endl;
return 0;
}


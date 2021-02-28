#include<iostream>
using namespace std;
int main()
{
	int num,temp;
	bool mas=false;
	cout<<"enter an integer number=";
	cin>>num;
	for(temp=2; temp<num; temp++)
	{
		if(num%temp==0)
		mas=true;
		
	}
	if(mas==true)
	cout<<"you enter not a prime nmumber";
	else
	cout<<"you enter a prime number";
	return 0;
	

}

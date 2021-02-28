#include <iostream>
using namespace std;
int main()
{
int num, y, sum=0;
cin>>num;
while(num>0)
{
	y=num%10;
	cout<<y;
	sum=sum+y;
	num=num/10;
}
cout<<sum;
}



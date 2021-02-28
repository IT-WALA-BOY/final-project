#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int fnum,snum,onum,esum,osum;
	cout<<"enter two integers first number should be less than secound";
	cin>>fnum>>snum;
	cout<<"all odd number";
	while(fnum<=snum)
	{
		if(fnum%2!=0)
{
	cout<<"fnum";
	osum=osum+fnum;
	cout<<"osum="<<osum;
}
	else
	esum=esum+fnum;
	fnum++;
	
}
cout<<endl;
cout<<"sum of all even number="<<esum<<endl;
cout<<""<<endl;
for(int i=1; i<=10; i++)
{
	cout<<"number="<<i<<" "<<"saqure of i ="<<pow(i,2)<<endl;
}
cout<<endl<<endl;
cout<<"sum of saqure of all odd number="<<osum;
return 0;
	}

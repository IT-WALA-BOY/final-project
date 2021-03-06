#include <iostream>
using namespace std;
int main ()
{
	int p, rate=0;
	

	while(true)
	{
			cout<<"enter total number of p: ";
	cin>>p;
	if(p>=7)
	{
		rate=100;
		
	}
	else if (p==5 && p==6)
	{
		rate=150;
	}
	else if (p>=1 & p<=4)
	{
		rate=200;
	}
	else if (p<0)
	{
		cout<<"invlaid Statemnt entered : "<<endl;
		break;
	}
	cout<<"Amount of money charged for saminar : "<<p*rate<<endl;
	}
	
}

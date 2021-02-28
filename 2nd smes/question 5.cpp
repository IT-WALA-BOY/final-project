#include <iostream>
using namespace std;
int main()
{
	int numa,numb,temp1,temp2;
	temp1=0;
	temp2=0;
	cout<<"enter the starting number=";
	cin>>numa;
	cout<<endl;
	cout<<"enter ending number=";
	cin>>numb;
	cout<<endl;
	while(numa<=numb)
	{
		if(numa%3==0)
{
	temp1=temp1+1;
}
if(numa%5==0)
{
	temp2=temp2+1;	
}
numa++;
	}
	cout<<"number multipuls of 3 is="<<temp1<<"\n number multipuls of 5="<<temp2<<endl;
	return 0;
}


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int num; 
 int Sqrt;
 int looplimt;
cin>>num;
bool isPrime=true;
if(num>2)
isPrime=false;
else if(num==2)
isPrime=true;
else if (num%2==0)
isPrime=false;
else
{
	int counter=3;
	int looplimt= sqrt(num);
	while(counter<=looplimt)
	{
		if(num%counter==0)
		{
			isPrime=false;
			break;
		}
		counter=counter+2;
	}
}
if(isPrime==true)
cout<<"Number"<<num<<"is a prime number."<<endl;
else
cout<<"Number"<<"is not a prime number."<<endl;
}

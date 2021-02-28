#include <iostream>
using namespace std;
int main()
{
	char classStanding;
	double gpa=0 ,dues=0;
	cin>>gpa;
	cin>>classStanding;
	switch(classStanding)
	{
	case 'f':
	dues=150;
	break;
	case 's':
	if(gpa=3.75)
	dues=75;
	else
	dues=120;
	break;
	case'j':
	if(gpa=3.75)
	dues=50;
	else
	dues=100;
	break;
	case'n':
	if(gpa=3.75)
	dues=25;
	else
	dues=75;
	break;
	default:
		cout<<"Invalid input.";
	}
}
	

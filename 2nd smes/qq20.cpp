#include <iostream>
using namespace std;
int main()
{
	double overspeed , fine;
	cin >>overspeed;
	if(overspeed>0 && overspeed<=5 )
 	fine=20;
	else if(overspeed>5 && overspeed<=10) 
	 fine=75;
	else if(overspeed>10 && overspeed<=15)
	 fine=150;
	 else if(overspeed>15)
	 {
	 	overspeed=overspeed-15;
	 	overspeed=overspeed*20;
	 	fine=150+overspeed;
	 }
}

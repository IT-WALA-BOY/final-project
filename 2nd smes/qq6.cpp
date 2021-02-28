#include <iostream>
using namespace std;
	int main()
	{
		int totalcookies , boxes , container;
		cin>>totalcookies;
		if(totalcookies>=24)
		boxes=totalcookies/cookies_per_box;
		else
		cout<<"total cookies are less than requirement";
		if(boxes>=75)
		container=boxes/boxes_per_container;
		else
		cout<<"total boxes are less than requirement";
		

	}

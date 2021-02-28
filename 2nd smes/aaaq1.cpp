#include<iostream>
#include<cmath>
using namespace std;
void find_area(double , double , double );
int main()
{
	double first,second,third;
	cout<<"enter the first side of a triangle : ";
	cin>>first;
	cout<<"enter the second side of a triangle : ";
	cin>>second;
	cout<<"enter the third side of a triangle : ";
	cin>>third;
	find_area(first,second,third);
	return 0;
	
 } 
 void find_area(double a, double b, double c)
 {
 	double area,S;
 	S=(a+b+c)/2;
 	area=sqrt(S*(S-a)*(S-b)*(S-c));
 	cout<<"Area of a triangle : "<<area;
 }

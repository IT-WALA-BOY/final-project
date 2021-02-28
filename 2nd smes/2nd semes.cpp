#include <iostream>
using namespace std;
 class Rectangle
 {
 	private:
 		double width;
 		double length;
 		
	public:
		void setWidth(double);
		void setLength(double);
		double getWidth();
		double getLength();
		double gatArea();
		
		 };
		 void Rectanle::setWidth(double w) 
		 {
		 	Width =w;
		 	
		 }
		 void Rectangle::serLength(double len)
		 {
		 	length = len;
		 }
		 double Rectangle::getWidth()
		 {
		 	return length;
		 }
		 double Rectangle :: getArea()
		 {
		 	return width * length;
		 }
		 int main()
		 Rectagle x,y,z;
		 double rectW,recL;
		 cout<<"enter length of rectangle";
		 cin>>rectL;
		 cout<<endl;
		 cout<<"enter width of rectangle";
		 cin>>rectW;
		 cout<<endl;
		 xyz.setWidth(rectW)
		 xyz.setLength(rectL)
		 
		 cout<<"Width of rectangle" <<xyz.getWidth()<<endl;
		 cout<<"Length of rectangle" <<xyz.grtLength()<<endl;
		 cout<<"Area of rectangle"<<xyz,getArea()<<endL;
	}

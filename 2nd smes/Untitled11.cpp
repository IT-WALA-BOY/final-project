#include<iostream>
using namespace std;
class Ship
{
	private:
  string Name;
  string year;
  public:
  Ship (string a, string b)
  {
  	setname(a);
  	setyear(b);
  }
   string getname()
   {
   	return Name;
   }
   void setname ( string a)
   {
   	Name = a;
   }
   string getyear()
   {
   	return year;
   }
   void setyear (string b)
   {
   	year=b;
   }
   virtual void print()
   {
   	cout<<"The Name of Ship: "<<Name<<endl;
   	cout<<"The Ship build in year: "<<year<<endl;
   }
};
class CruiseShip: public Ship
{
	private:
int NumOfPassengers;
public:
CruiseShip (string a, string b, int c): Ship(a,b)
{
	 setnumoofpg(c);
}
void setnumoofpg( int c)
{
NumOfPassengers=c;	
}
void print()
{
	cout<<"Name of Ship: "<< Ship::getname()<<endl;
	cout<<"Maximum number of passenger :"<<NumOfPassengers<<endl;
}
};
class CargoShip: public Ship
{
	private:
int capacity;
 public:
 CargoShip ( string a, string b , int d ):Ship(a,b)
{
	 setcapacity(d);
}
void setcapacity( int d)
{
  capacity=d;	
}
void print()
{
	cout<<"Name of Ship: "<< Ship::getname()<<endl;
	cout<<"Ship capacity in tonnage is: "<<capacity<<endl;
}
};

void callprint(Ship &w)
{
	w.print();
}
int main()
{
	

Ship object1("sship","","0");
CruiseShip object2("ship2","","6969");
CargoShip object3 ("ship3","","691");

callprint(object1);
cout<<endl;
callprint(object2);
cout<<endl;
callprint(object3);
cout<<endl;


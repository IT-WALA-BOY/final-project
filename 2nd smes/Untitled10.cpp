#include<iostream>
using namespace std;
class ship
{
	private:
  string shipsname;
  string  year;
  public:
  ship (string a, string b)
  {
	setname(a);
	setyear(b);
  }
   string getname()
   {
	return shipsname;
   }
   void setname ( string a)
   {
	shipsname = a;
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
	cout<<"The ships name is :"<<shipsname<<endl;
	cout<<"The year of bulit is : "<<year<<endl;
   }
};
class cruiseship: public ship
{
	private:
int num_of_PG;
public:
cruiseship ( string a, string b , int c ):ship(a,b)
{
	 setnumoofpg(c);
}
void setnumoofpg( int c)
{
num_of_PG=c;	
}
void print()
{
	cout<<"the ship name :"<< ship::getname()<<endl;
	cout<<"the maximum  number of passenger is :"<<num_of_PG<<endl;
}
};
class cargoship: public ship
{
	private:
int capacity;
 public:
 cargoship ( string a, string b , int d ):ship(a,b)
{
	 setcapacity(d);
}
void setcapacity( int d)
{
  capacity=d;	
}
 void print()
{
	cout<<"The ship name :"<< ship::getname()<<endl;
	cout<<"The ship capacity  in tanage: "<<capacity<<endl;
}
};

void callprint(ship &w)
{
	w.print();
}
int main()
{
	ship obj1("Ghazi02","1965");
ship *object1=&obj1;
object1->print();
cruiseship obj2("jhonwick"," ",9842);
object1=& obj2;
object1->print();
	cargoship obj3 ("Shan09","",9533);
object1=&obj2;
object1->print();
}


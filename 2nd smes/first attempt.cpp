#include <iostream>
using namespace std;
	class Ship
	{
		public:
			virtual void print()const;
			Ship(string n="",string b="");
		private:
		string nameofShip;
		string yearofShipbuilt;	
	};
	class CruiseShip: public Ship
	{
		public:
			void print()const;
			CruiseShip(string n="",string b="" ,string p="");
		private:
			int maximumPassengers;
	};
    class CargoShip: public Ship
    {
        public:
        	void print()const;
			CargoShip(string n="",string b="" ,string p="", string c="");
		private:
		    int CargoCintonage;	
		};
		void Ship::print() const
   {
        cout << "Name of Ship: " << nameofShip;
   }
    Ship::Ship(string n, string b)
   {
        nameofShip = n;
   }
   void Ship::print() const
   {
        cout << "Year of Ship built: " << yearofShipbuilt;
   }
   
   Ship::Ship(string b="", string n="")
   {
        yearofShipbuilt = b;
   }
   void CruiseShip::print() const
   {
   	    Ship::print();
        cout << "Maximun passengeres: " << maximumPassengers;
   }
   CruiseShip::CruiseShip(string n, string b, string p)
   {
        maximumPassengers = p;
   }
   void CargoShip::print() const
   {
   	    ship::print();
        cout << "Cargo Capicty in Tonage: " << CargoCintonage <<endl;
   }
   CargoShip::CargoShip(string n, string b, string p, string c)
   {
        CargoCintonage = c;
   } 
   void callPrint(Ship& p);
int main
{
	Ship Ship("Ladden Jaffari", "1981" );
	CruiseShip Cruise("Murshad","1990", "198765");
	CargoShip Cargo("UNban_pubg","2001", "1987654", "123456" );
	Ship.print();
	cout << endl;
	Cruise.print();
	cout<<"*********"<<endl;
	Cargo.print();
	cout<<endl;
	callPrint(Ship); 
    cout << endl;
	callPrint(Cruise); 
    cout << endl;
    callPrint(Cargo); 
    cout << endl;	
}
void callPrint(Ship p) //p is a value parameter
{
p.print();
}


























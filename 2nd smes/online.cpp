#include <iostream>
#include <string>
using namespace std;

class Ship
{
        string shipName;
        string shipYear;
    public:
        Ship(string n = "Titanic", string y = "1980")
        {
            shipName = n;
            shipYear = y;
        }
        void setShipName(string n) { shipName = n; }
        void setShipYear(string y) { shipYear = y; }
        string getShipName() const { return shipName; }
        string getShipYear() const { return shipYear; }
        virtual void print() const {}
};

class Cruiseship : public Ship
{
        int numPass;
    public:
        Cruiseship(int numPass) : Ship("Hawaii-ish", "1948")
        { this->numPass = numPass; }
        void setNumPass(int num) { numPass = num; }
        int getNumPass() const { return numPass; }
        void print() const
        { cout << this->getShipName() << this->getNumPass(); }
};

class CargoShip : public Ship
{
        int cargoCapacity;
    public:
    	public:
        CargoShip(int cargoCapacity) : Ship("USBEB", "2050")
        { this->cargoCapacity = cargoCapacity; }
        void setCargoCapacity(int cc) { cargoCapacity = cc; }
        int getCargoCapacity() const { return cargoCapacity; }
        void print() const
        { cout << this->getShipName() << this->getCargoCapacity(); }
};

int main()
{
    const int NUM_SHIPS = 3;
    Ship *ships[NUM_SHIPS] =
        {
            new Ship,
            new Cruiseship(2000),
            new CargoShip(900)
        };
    for (int i=0; i<3; i++)
    ships[i]->print();
    for (int i=0; i<3; i++)
        delete ships[i];
}

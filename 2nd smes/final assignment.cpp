#include <iostream>
#include <iomanip>
using namespace std;

class CarbonFootPrint
{
	public:
		virtual double getCarbonFootPrint()
		{
			return 0.00;
		}
};

class Building : public CarbonFootPrint
{
	private:
		double electricity_In_Killo_Watts;
		int number_Of_Months;
		double avg_CO2_Per_Killo_Watts = 0.45;
		
	public:
		Building()
		{
			electricity_In_Killo_Watts = 0.00;
			number_Of_Months = 0;
		}
		
		Building(double electricKW, int numMonth)
		{
			setElectricKW(electricKW);
			setNumOfMonths(numMonth);
		}
		
		void setElectricKW(double elecKW)
		{
			electricity_In_Killo_Watts = elecKW;
		}
		
		void setNumOfMonths(int numOfMon)
		{
			number_Of_Months = numOfMon;
		}
		
		double getCarbonFootPrint()
		{
			return (electricity_In_Killo_Watts * 
					avg_CO2_Per_Killo_Watts) *
					number_Of_Months;
		}
};

class Car : public CarbonFootPrint
{
	private:
		double car_Driven_In_Killometers;
		double avg_CO2_Per_Killometer = 200;
		
	public:
		Car()
		{
			car_Driven_In_Killometers = 0.00;
		}
		
		Car(double carDrivenKMs)
		{
			setCarDrivenKMs(carDrivenKMs);
		}
		
		void setCarDrivenKMs(double carDrivenKM)
		{
			car_Driven_In_Killometers = carDrivenKM;
		}
		
		double getCarbonFootPrint()
		{
			return car_Driven_In_Killometers * avg_CO2_Per_Killometer;
		}
};
class Bicycle : public CarbonFootPrint
{
	private:
		double bicycle_Ridden_In_Killometers;
		double avg_CO2_Per_Killometer = 0.16;
		
	public:
		Bicycle()
		{
			bicycle_Ridden_In_Killometers = 0.00;
		}
		
		Bicycle(double bicycleRiddenKMs)
		{
			
		}
		
		void setBicycleRiddenKM(double bicycleRideKM)
		{
			bicycle_Ridden_In_Killometers = bicycleRideKM;
		}
		
		double getCarbonFootPrint()
		{
			return bicycle_Ridden_In_Killometers *
				   avg_CO2_Per_Killometer;
		}
};

int main()
{
	cout << fixed << showpoint << setprecision(2);
	
	CarbonFootPrint *ptrCFPClass;
	//CFP short for Carbon Foot Print.
	
	Building objBuildingClass;	
	Building *ptrBuildingClass = &objBuildingClass;
	
	int numOfMonth;
	double electricInKW;
	
	cout << "Enter number of months for electricity use: ";
	cin >> numOfMonth;
	ptrBuildingClass -> setNumOfMonths(numOfMonth);
	
	cout << "Enter how many killowatt's of electricity "
	        << "consumed in "<<numOfMonth<<" months: ";
	cin >> electricInKW;
	ptrBuildingClass -> setElectricKW(electricInKW);
	
	ptrCFPClass = &objBuildingClass;
	
	cout << "Building consumed " << electricInKW << " Killowatts of "
	        << "electricity in " << numOfMonth << " months." << endl;
	cout <<"Thus it's carbon foot print is " 
                  << ptrCFPClass -> getCarbonFootPrint() << " killograms." << endl;
		 
	cout << endl;
	
	Car objCarClass;
	Car *ptrCarClass = &objCarClass;
	
	double carDrivedKMs;
	
	cout << "Enter the driven milage of car in killometers: ";
	cin >> carDrivedKMs;
	ptrCarClass -> setCarDrivenKMs(carDrivedKMs);
	
	ptrCFPClass = &objCarClass;
	
	cout << "Car has been driven atleast for " << carDrivedKMs 
	        << " Killometers." << endl;
	cout << "So, the carbon emission it has produced is "
	        << ptrCFPClass -> getCarbonFootPrint() <<" grams."<<endl;
		 
	cout << endl;
	
	Bicycle objBicycleClass;
	Bicycle *ptrBicycleClass = &objBicycleClass;
	
	double bicycleRideKM;
	
	cout << "Enter how many killometers bicycle been ridden: ";
	cin >> bicycleRideKM;
	ptrBicycleClass -> setBicycleRiddenKM(bicycleRideKM);
	
	ptrCFPClass = &objBicycleClass;
	
	cout << "Bicycle has been ridden atleast for " << bicycleRideKM
	        << " killometers." << endl;
	cout << "Riding a bicycle has produce carbon foot print of "
	        << ptrCFPClass -> getCarbonFootPrint() << " killogram.";
}


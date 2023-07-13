#include <iostream>
#include <iomanip>

using namespace std;

class Cars
{
	public:
		string carMake;
		string carModel;
		string carColor;
		int fuelEfficiency;
		int milesDriven;
		double costPerMile;

	
		void setCarMake(string cMake)
		{
			carMake = cMake;
		};
		string getCarMake()
		{
			return carMake;
		};

		void setCarModel(string cModel)
		{
			carModel = cModel;
		};
		string getCarModel()
		{
			return carModel;
		};

		void setCarColor(string cColor)
		{
			carColor = cColor;
		};
		string getCarColor()
		{
			return carColor;
		};

		int getFuelEfficiency()
		{
			return fuelEfficiency;
		}
		void setFuelEfficiency(int fEfficiency)
		{
			if (fEfficiency >= 0)
			{
				fuelEfficiency = fEfficiency;
			}
			else
			{
				cout << "Fuel Efficiency cannot be negative - setting to zero" << endl;
				fuelEfficiency = 0;
			}
		}

		int getMilesDriven()
		{
			return milesDriven;
		};
		void setMilesDriven(int mDriven)
		{
			if (mDriven >= 0)
			{
				milesDriven = mDriven;
			}
			else
			{
				cout << "Mileage cannot be negative - setting mileage to zero" << endl;
				milesDriven = 0;
			}
		};

		Cars()
		{
			carMake = "TBD";
			carModel = "TBD";
			int mDriven = 0;
			carColor = "TBD";
			int fuelEfficiency = 0;
		}

		Cars(string cMake, string cModel, int mDriven, string cColor, double fEfficiency)
		{
			carMake = cMake;
			carModel = cModel;
			milesDriven = mDriven;
			carColor = cColor;
			fuelEfficiency = fEfficiency;
		}
		
		double calculateCostPerMile()
		{
			double costPerGallon = 2.84;
			costPerMile = costPerGallon / fuelEfficiency;
			return costPerMile;
		}
	
};

int main()
{
	Cars myCar;
	myCar.carMake = "Ford";
	myCar.carModel = "Focus";
	myCar.carColor = "Silver";
	myCar.milesDriven = 89000;
	myCar.fuelEfficiency = 27;

	cout << "This is data for code creator's vehicle." << endl;
	cout << "Make is: " << myCar.getCarMake() << endl;
	cout << "Model is: " << myCar.getCarModel() << endl;
	cout << "Color is: " << myCar.getCarColor() << endl;
	cout << "Miles Driven is: " << myCar.getMilesDriven() << endl;
	cout << "Fuel Efficiency is: " << myCar.getFuelEfficiency() << endl;
	cout << fixed << setprecision(2) << "Cost per Mile is: $ " << myCar.calculateCostPerMile() << endl;

	Cars secondCar = Cars("Ford", "F150", 45000, "Red", 19);

	cout << "\nThis is data for another vehicle" << endl;
	cout << "Make is: " << secondCar.getCarMake() << endl;
	cout << "Model is: " << secondCar.getCarModel() << endl;
	cout << "Color is: " << secondCar.getCarColor() << endl;
	cout << "Miles Driven is: " << secondCar.getMilesDriven() << endl;
	cout << "Fuel Efficiency is: " << secondCar.getFuelEfficiency() << endl;
	cout << fixed << setprecision(2) << "Cost per Mile is: $ " << secondCar.calculateCostPerMile() << endl;
}




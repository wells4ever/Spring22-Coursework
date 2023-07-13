#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	
	cout << "using points (0,0) and (12,7)" << endl;

	double x1, x2, y1, y2;
	double deltaX, deltaY;
	double dPythagorean, dCityBlock;
	double interior;

	x1 = 0;
	y1 = 0;
	x2 = 12;
	y2 = 7;

	deltaX = x2 - x1;
	deltaY = y2 - y1;

	//calculations
	
	interior = pow(deltaX, 2) + pow(deltaY, 2);
	dPythagorean = sqrt(interior);

	dCityBlock = deltaX + deltaY;
	cout << fixed << setprecision(2);
	cout << "pythagorean distance = " << dPythagorean << " and the city block distance = " << dCityBlock<< endl;
	

	return 0;
}

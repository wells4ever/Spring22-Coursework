#include <iostream>
#include <cmath>

using namespace std;

double pi = 2 * acos(0.0);

double calculateCircumference(double);
double calculateSA(double);

double calculateMean(double num1, double num2, double num3, double num4);
double calculateSD(int num1, int num2, int num3, int num4, double mean);

int main()
{
	//part 1
	int diamEarth = 7915;
	int diamSun = 865370;
	int radEarth = diamEarth / 2;
	int radSun = diamSun / 2;

	cout << "The diameter of Earth is: 7915 miles" << endl;
	cout << "The circumference of Earth is: " << calculateCircumference(diamEarth) << " miles" << endl;
	cout << " The surface area of Earth is: " << calculateSA(radEarth) << "square miles" << endl;

	cout << "\nThe diameter of the Sun is: 865370 miles" << endl;
	cout << "The circumference of the Sun is: " << calculateCircumference(diamSun) << "miles" << endl;;
	cout << "The surface area of the sun is: " << calculateSA(radSun) << "square miles" << endl;

	cout << "\nThe surface area of Japan is 145937 square miles." << endl;
	double surfAreaJapan = 145937;
	double japansToCoverEarth = calculateSA(radEarth) / surfAreaJapan;
	cout << "It would take: " << japansToCoverEarth << " Japan's to cover Earth entirely." << endl;

	//part 2
	int x1, x2, x3, x4;

	cout << "\n Input 4 integers" << endl;
	cin >> x1 >> x2 >> x3 >> x4;

	double mean = calculateMean(x1, x2, x3, x4);
	double standdev =calculateSD(x1, x2, x3, x4, mean);
	cout << "The mean (average) of the integers is: " << mean << endl;
	cout << "The standard deviation of the integers is: " << standdev << endl;
}

double calculateCircumference(double diameter)
{
	double circ = pi * diameter;
	return circ;
}

double calculateSA(double radius)
{
	double surf = 4 * pi * pow(radius, 2);
	return surf;
}

double calculateMean(double num1,double num2,double num3,double num4)
{
	double x = (num1 + num2 + num3 + num4) / 4;
	return x;
}

double calculateSD(int num1, int num2, int num3, int num4, double mean)
{
	double y = sqrt((pow((num1 - mean), 2)) + (pow((num2 - mean), 2)) + (pow((num3 - mean), 2)) + (pow((num4 - mean), 2)));
	return y;
}
#include <iostream>

using namespace std;

double returnLargest(double num1, double num2, double num3, double num4, double num5, double num6, double num7);
double returnLarger(double,double);

int main()
{
	double a, b, c, d, e, f, g;

	cout << "This program compares integers and outputs the largest value." << endl;
	cout << "Input 7 integers" << endl;
	cin >> a >> b >> c >> d >> e >> f >> g ;

	double largestNumber = returnLargest(a,b,c,d,e,f,g);

	cout << "The largest value is: " << largestNumber << endl;
}

double returnLargest(double num1, double num2, double num3, double num4, double num5, double num6, double num7)
{
	double largest;

	largest = returnLarger(num1, returnLarger(num2, returnLarger(num3, returnLarger(num4, returnLarger(num5, returnLarger(num6, num7))))));

		return largest;
}
double returnLarger(double x,double z)
{
	
	if (x > z)
		return x;
	else
		return z;
}
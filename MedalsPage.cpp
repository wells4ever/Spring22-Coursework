// Philip Wells
// Lab 05
// Progressive lab on USA olympic medals

#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
   ifstream inData;
   ofstream outData;

   string Country = "";
   int Gold = 0;
   int Silver = 0;
   int Bronze = 0;
   int Total = 0;

   inData.open ("metals.txt");
   outData.open("metals.out");

   inData >> Country >> Gold >> Silver >> Bronze;

   Total = Gold + Silver + Bronze;

   outData << setw(10) << "Country"  << setw(10) << "Gold"  << setw(10) << "Silver" << setw(10) << "Bronze" << setw(10) << "Total" << endl;

   outData << setw(10) << "-------"  << setw(10) << "----"  << setw(10) << "------" << setw(10) << "------" << setw(10) << "-----" << endl;

   outData << setw(10) << Country  << setw(10) << Gold  << setw(10) << Silver << setw(10) << Bronze << setw(10) << Total << endl;

   inData.close();
   outData.close();


   return (0);
 }
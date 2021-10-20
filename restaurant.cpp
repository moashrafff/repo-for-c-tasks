#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
const float drink = 1.10;
const float sandwich= 3.10;
const float chips = 1.25;

cout<< fixed << showpoint << setprecision(2);
cout<< setfill('-');
cout<< left << setw(10) << '-' << "Menu" << right << setw(10) << '-' << endl;
cout<< left << setw(12) << "Drink" << right << setw(12) << drink << endl;
cout<< left << setw(12) << "Sandwich"  << right << setw(12) << sandwich << endl;
cout<< left << setw(12) << "Chips" << right << setw(12) <<chips << endl;

int x , y , z ;
cout<< "Enter the number of Drinks, Sandwiches and Chips? ";
cin >> x >> y >> z ;

float totalBill ;
totalBill = (x * drink) + (y * sandwich) + (z * chips);
cout<< "Total Bill = " << totalBill ;

return 0;
}



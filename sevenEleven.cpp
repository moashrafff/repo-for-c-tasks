#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
const float juice = 1.20;
const float soda = 0.85;
const float water = 1.10;

const float hotdog = 1.15;
const float taco = 0.75;
const float burrito = 1.30;

cout<< fixed << showpoint << setprecision(2);
cout<< setfill('-');
cout<< left << setw(10) << '-' << "Seven-Eleven Store" << right << setw(10) << '-' << endl;
cout<< "Drinks \n";
cout<< "\t" << left << setw(15) << "Juice(J)" << right << setw(15) << juice << endl;
cout<< "\t" << left << setw(15) << "Soda(S)"  << right << setw(15) << soda << endl;
cout<< "\t" << left << setw(15) << "Water(W)" << right << setw(15) <<water << endl;
cout<< "Foods \n";
cout<< "\t" << left << setw(15) << "Hotdog"  << right << setw(15) << hotdog << endl;
cout<< "\t" << left << setw(15) << "Taco"    << right << setw(15) << taco << endl;
cout<< "\t" << left << setw(15) << "Burrito" << right << setw(15) << burrito << endl;

int drinksNum ;
cout<< "\nEnter the number of drinks: " ;
cin>> drinksNum ;

char drinkType ;
cout<< "\tWhat kind(upper or lower case J/s/W)? " ;
cin>> drinkType;

float drinkCost;
switch ( drinkType )
{   
case 'J' : case 'j' : 
    drinkCost = drinksNum * juice ;
    break ; 
case 'S' : case 's' : 
    drinkCost = drinksNum * soda ;
    break ; 
case 'W' : case 'w' : 
    drinkCost = drinksNum * water ;
    break ; 

}

int h , t , b  ;
cout<< "Enter the number of food in order(Hotdog, Taco, Burrito): " ;
cin>> h >> t >> b ;

float foodCost;
foodCost = ( h * hotdog ) + ( t * taco ) + ( b * burrito ) ;

float totalBill ;
totalBill = drinkCost + foodCost; 

cout<< fixed << showpoint << setprecision(2);
cout<< "\tYour total bill = " << totalBill ;

return 0;
}

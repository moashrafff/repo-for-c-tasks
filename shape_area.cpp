#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{

cout<< "I can compute the area and perimeter of this Trapezoid, try me \n";
cout<< "               Base_1			\n";
cout<< "          ---------------- \n";
cout<< "         /|               \\ \n" ;
cout<< "        / |                \\ \n";
cout<< "Side_1 /  | Height          \\  Side_2 \n";
cout<< "      /   |                  \\ \n";
cout<< "     /    |                   \\ \n";
cout<< "    ---------------------------- \n\n";
cout<< "            Base_2 \n ";

double b1 , b2 , s1 , s2 , h , area , per ;
cout<< "Please enter the values of Base_1 and Base_2: ";
cin>> b1 >> b2 ;
cout<< "Please enter the values of Side_1 and Side_2: ";
cin>> s1 >> s2 ;
cout<< "Please enter the value of the height: ";
cin>> h ;

area =  ( (b1 + b2) * h ) / 2 ;
per = ( b1 + b2 ) + (s1 + s2 ) ;

cout<< fixed << showpoint << setprecision(2);
cout<< "\t Area = " << area << endl ;
cout<< "\t Perimeter = " << per <<endl ;
return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	
cout<< " For the following triangle \n";
cout<< "        /\\ \n";
cout<< "       /  \\ \n";
cout<< "    a /    \\ b \n";
cout<< "     /      \\ \n";
cout<< "     --------\n";
cout<< "        c\n";

float a , b , c , area , per , p2 ;
cout<< "Enter the measurement of sides a, b, c: " ;
cin>> a >> b >> c ;

per = ( a + b + c ) ;
p2 = per / 2 ;
area= pow( p2 * (p2-a) * (p2-b) * (p2-c) , 0.5 ) ;

cout<< "Perimeter = " << per << endl ;
cout<< " Area = " << area << endl ;


return 0;
}

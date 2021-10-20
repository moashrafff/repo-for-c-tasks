#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
 float a , b ,c , d , x , y ;
 
 cout<< " Enter the values of a,b,c and d :";
 cin>> a >> b >> c >> d ;
 
 x= a * pow(  (b + (c*d ) ), a ) ;
 y= pow( pow(b,5) - (4*a*c) , (1/7) );

cout<< fixed << showpoint << setprecision(2);
cout<< "X= " << x << endl ;
cout<< "Y= " << y << endl ;





return 0;
}

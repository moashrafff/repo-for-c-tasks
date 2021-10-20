#include <iostream> 
#include <iomanip>    
#include <ctime>
#include <stdlib.h>
using namespace std;
int main ()
{

char choice;
cout<< setfill('-');
cout<< left << setw(10) << '-' << "Practice Audition Or Subtraction" << right << setw(10) << '-' << endl;
cout<< "a. Addition \nb. subtraction\nYour choice is: " ;
cin>> choice;

string first , middle , last ;
cout<< "Please enter your full name: " ;
cin>> first >> middle >> last ;

char gender ;
cout<< first << " " << middle << " " << last << ", Please enter your gender (uppercase M/F): " ;
cin>> gender ;

string check ;
switch ( gender )
{   
case 'M' :
    check = "Mr. ";
    break ; 
case 'F' :
    check = "Mrs. ";
    break ; 
}

cout<< check << first << " " << middle << " " << last << ", Please try to answer this question: \n";
int num1 , num2 , ans ;
srand( time(0) ) ; 
num1 = rand() % 20 ; 
num2 = rand() % 20 ;

if ( choice == 'a' )
{
	cout<< num1 << " + " << num2 << " =? " ;
	cin>> ans;

	if (num1 + num2 == ans)
		cout << "CORRECT\n";
   
	else
		cout << "Sorry, WRONG\n";
}

else
{
	cout<< num1 << " - " << num2 << " =? " ;
	cin>> ans;

	if (num1 - num2 == ans)
		cout << "CORRECT\n";
   
	else
		cout << "Sorry, WRONG\n";
}

return 0;
}


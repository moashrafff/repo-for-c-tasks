#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
string first , middle , last;
cout<< " Please enter your full name (first , middle and last): ";
cin>> first >> middle >> last;

int age;
cout<< " How old are you ? ";
cin>> age;

cout<< setfill('.');
cout<< left << setw(20) << "First name" << right << setw(20) << first << endl;
cout<< left << setw(20) << "Middle name" << right << setw(20) << middle << endl;
cout<< left << setw(20) << "Last name" << right << setw(20) <<last << endl;
cout<< left << setw(20) << "Age" << right << setw(20) << age << endl;

return 0;
}

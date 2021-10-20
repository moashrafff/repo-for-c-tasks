#include <iostream>
using namespace std;
int main ()
{

cout<<"Enter the age of 6 friends : ";
int x=0 ;

for (int i = 0 ; i<6 ; i++)
{
	cin>>x;

	if (x < 13)
		cout << x << "\t Child \n";
		
	else if (x >19)
		cout << x << "\t Adult \n";
		
	else
		cout << x << " \t Teenager \n";
}


return 0;
}

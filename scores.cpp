#include <iostream>
using namespace std;
int main ()
{

string characters;
cout<< "Lets count the number of sores A, B, C, and D \n";
cout<< "Enter a string of 12 scores : ";
cin>> characters;

int A_no = 0 , B_no = 0 , C_no = 0 , D_no = 0 ;

for(int i = 0 ; i < 12 ; i++)
{
	if (characters[i] == 'A' || characters[i] == 'a')
		A_no++;
		
	if (characters[i] == 'B' || characters[i] == 'b')
		B_no++;
		
	if (characters[i] == 'C' || characters[i] == 'c')
		C_no++;
		
	if (characters[i] == 'D' || characters[i] == 'd')
		D_no++;
}

cout<<"No. Of A's = " << A_no <<endl;
cout<<"No. Of B's = " << B_no <<endl;
cout<<"No. Of C's = " << C_no <<endl;
cout<<"No. Of D's = " << D_no <<endl;


return 0;
}

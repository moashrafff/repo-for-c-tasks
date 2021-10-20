#include <iostream>
using namespace std;
int main ()
{
cout<< " Let's see how you are doing in your classes. \n";

int num = 0;
cout<< "Please enter the number of students : ";
cin>>num;

for(int i = 1 ; i <= num ; i++)
{
	string name = "Name";
	cout<<"What's your name? ";
	cin>>name;
	
	double avg = 0.0 ;
	int score1 = 0 , score2 = 0 ;
	cout<< name <<", Please enter your scores in two exams: ";
	cin>> score1 >> score2;
	avg = ( ( double(score1)+ double(score2) ) / 2);
	cout<< " Your average is " << avg ;
	

	if (avg < 60 )
		cout<<" and your grade is C \n";
		
	else if ( avg >= 60 && avg < 85 )
		cout<<" and your grade is B \n";
	
	else if ( avg >= 85 && avg <= 100 )
		cout<<" and your grade is A \n";

}

return 0;
}

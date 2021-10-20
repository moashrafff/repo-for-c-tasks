#include <iostream>
using namespace std;
int main ()
{

int students_num;
cout<< " Please Enter The Number Of Students : ";
cin>>students_num;

cout<<"Enter "<<students_num<<" score: ";

int sum =0 , max=0 , min=100 , x=0 ;

for (int i = 0 ; i<students_num ; i++)
{
	cin>> x ;
	sum+=x;
	
	 if(x >= max)
            max = x;
            
    if(x <= min)
        min = x;
}

double avg= (double)sum / (double)students_num ;
cout<<"score's average: " << avg <<endl;
cout<<"Maximum score is " << max <<endl;
cout<<"Minimum score is " << min <<endl;

return 0;
}

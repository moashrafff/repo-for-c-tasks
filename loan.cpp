#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

char contine;
float price ,interestRate , loanDuration , monthlyPayment, totalInterset;
int main()
{
	do    
	{
	        cout << "Enter the price of the car(p)? ";
	        cin >> price;        
			cout << "Enter the loan duration in year(t): ";        
			cin >> loanDuration;        
			cout << "Enter the interest rate(r): ";        
			cin >> interestRate;        
			monthlyPayment = price * (((interestRate / 12) * pow(1 + interestRate / 12, 12 * loanDuration)) / (pow(1 + interestRate / 12, 12 * loanDuration) - 1));
	        cout << "\tYour monthly payment is :$";
        	cout << monthlyPayment << endl;        
			cout << "\tTotal interest payed = ";        
			totalInterset = (loanDuration * 12 * monthlyPayment) - price;        
			cout<<totalInterset<<endl;        
			cout << "CONTINUE(y/n)? ";        
			cin >> contine;
    } 
	while (contine == 'y' || contine == 'Y'); 
}

#include <iostream>
#include <iomanip>
using namespace std;

int noOfMembers;
string name;
float clubFee, total = 0;
char choice;
int main()
{

cout << "-----------------------Greek Clubs Membership Fee ---------------------" << endl;
cout << "\ta. Sigma Club....................................100.50" << endl;
cout << "\tb. Omega Club....................................210.10" << endl;
cout << "\tc. Kapa Club.....................................175.25" << endl;
    cout << "How many members? ";
    cin >> noOfMembers;
    for (int i = 1; i <= noOfMembers; i++)
    {
      cout << "\n\tWhat is your name: ";
        cin >> name;
     cout << "\t" << name << ", which club do you want to be a member of(a/b/c)?";
        cin >> choice;
        if (choice == 'a' || choice == 'A')
        {
          clubFee = 100.50;
        }
        else if (choice == 'b' || choice == 'B')
        {
            clubFee = 210.10;
        }
       else
            clubFee = 175.25;
        cout << "\t\tPlease Pay : " << clubFee;
       total = total + clubFee;
       if (i < noOfMembers)
        {
        cout << "\n\tNext customer..........................................";
        }
        }
       cout<<endl;
        cout << "WOW! We have collected  $" << total;
 }

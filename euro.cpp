#include <iostream>
#include <iomanip>
using namespace std;
 using std::setw;
;

string name;
float yen=107.49, euro=0.92, bPound=0.80;
int tableSize;
int main()
{
    cout<<"Enter the table size: ";
    cin>>tableSize;
    cout << setw(10) << "$" << setw(10) << "Yen" << setw(10) <<
    "B.Pound" << setw(10) << "Euro" << endl;
    cout << setw(10) <<
    "-------------------------------------------------"<<endl;
     for (int i = 1; i <=tableSize; i++)
    {
        cout << setw(10) << i << setw(10) <<
     i*yen << setw(10) << i*bPound << setw(10) << i*euro << endl;
     }
}

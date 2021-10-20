#include <iostream> 
#include <cmath>

using namespace std;   


float hFeet, hInches, height, wPound, BMI, bodyfat, age; 
char gender;
int count; 
string fname,sname,lname; 
int main()
{
cout << "Enter the number of people interested to try this program "; 
cin >> count;
for (int i = 1; i <= count; i++)
{

cout << "Please enter your full name: "; 
cin >> fname >> sname >> lname ;
cout << fname << " " << sname << " " << lname << ", please enter your gender(m/f)? "; 
cin >> gender;
cout << "\tEnter your weight in pounds: "; 
cin >> wPound;
cout << "\tEnter your height in feet and inches: "; 
cin >> hFeet >> hInches;
cout << "\tEnter your age: "; 
cin >> age;
height = (hFeet * 12) + hInches;
BMI = (wPound / pow(height, 2)) * 703;


if (gender == 'm' || gender == 'M')
{
bodyfat = (1.20 * BMI) + (0.23 * age) - 16.2; 
cout << "Your body fat percentage is " << bodyfat << endl; 
if (age >19 && age <41)
{
if (bodyfat < 8)
{
cout << "Your body fat percentage is under 8 percent, means you are Underfat" << endl;
}
else if (bodyfat >7 && bodyfat < 12)
{
cout << "Your body fat percentage is in 8-11 range, means you are Healthy" << endl;
}
else if (bodyfat > 18 && bodyfat < 26)
{
cout << "Your body fat percentage is in 19-25 range, means you are Overweight" << endl;
}
else if (bodyfat > 25)
{
cout << "Your body fat percentage is greater that 25, means you are Obese" << endl;
}
}

else if (age > 40 && age < 61)
{
 
if (bodyfat < 11)
{
cout << "Your body fat percentage is under 11 percent, means you are Underfat" << endl;
}
else if (BMI >10 && bodyfat < 23)
{
cout << "Your body fat percentage is in 11-22 range, means you are Healthy" << endl;
}
else if (BMI > 21 && BMI < 28)
{
cout << "Your body fat percentage is in 22-27 range, means you are Overweight" << endl;
}
else if (BMI > 27)
{
cout << "Your body fat percentage is greater that 27, means you are Obese" << endl;
}
}
else if (age > 60 && age <80)
{
if (BMI < 13)
{
cout << "Your body fat percentage is under 13 percent, means you are Underfat" << endl;
}
else if (BMI > 12 && BMI < 26)
{
cout << "Your body fat percentage is in 13-25 range, means you are Healthy" << endl;
}
else if (BMI > 24 && BMI < 31)
{
cout << "Your body fat percentage is in 25-30 range, means you are Overweight" << endl;
}
else if (BMI > 30)
{
cout << "Your body fat percentage is greater that 30, means you are Obese" << endl;
}
}
}
else
{
bodyfat = (1.20 * BMI) + (0.23 * age) - 5.4; 
cout << "Your body fat percentage is " << bodyfat << endl;
 if (age > 19 && age < 41)
{
if (BMI < 21)
{
 
cout << "Your body fat percentage is under 21 percent, means you are Underfat" << endl;
}
else if (BMI > 20 && BMI < 34)
{
cout << "Your body fat percentage is in 21-33 range, means you are Healthy" << endl;
}
else if (BMI > 32 && BMI < 40)
{
cout << "Your body fat percentage is in 33-39 range, means you are Overweight" << endl;
}
else if (BMI > 39)
{
cout << "Your body fat percentage is greater that 39, means you are Obese" << endl;
}
}

else if (age > 40 && age <= 61)
{
if (BMI < 23)
{
cout << "Your body fat percentage is under 23 percent, means you are Underfat" << endl;
}
else if (BMI > 22 && BMI < 36)
{
cout << "Your body fat percentage is in 23-35 range, means you are Healthy" << endl;
}
else if (BMI > 34 && BMI <= 41)
{
cout << "Your body fat percentage is in 35-40 range, means you are Overweight" << endl;
}
else if (BMI > 40)
{
cout << "Your body fat percentage is greater that 40, means you are Obese" << endl;
}
}
else if (age > 60 && age < 80)
{
if (BMI < 24)
{
cout << "Your body fat percentage is under 24 percent, means you are Underfat" << endl;
}
else if (BMI > 23 && BMI < 37)
{
cout << "Your body fat percentage is in 24-36 range, means you are Healthy" << endl;
}
 
else if (BMI > 35 && BMI <43)
{
cout << "Your body fat percentage is in 36-42 range, means you are Overweight" << endl;
}
else if (BMI > 42)
{
cout << "Your body fat percentage is greater that 30, means you are Obese" << endl;
}
}
}
}
}

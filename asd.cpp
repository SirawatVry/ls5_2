#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Define prototype function
void DisplayMenu();
float Area( float Radius);
float Area( float Length, const float Widht);
float Area( float  base,float height);
float Area(float a,float b,float h);
int main()
{
	char Choice;
	bool Flag = true;
	do {
	DisplayMenu();
	cin >> Choice;
	if (Choice == '1') {
	float Radius;
	cout << "\nEnter radius : ";
	cin >> Radius;
	cout << "Area of Circle = " << fixed;
	cout << setprecision(2) << Area(Radius) << endl;
	}
	else if (Choice == '2') {
	float Length,Widht;
	cout << "Enter length and width : ";
	cin >> Length >> Widht;
	cout << "Area of Rectangle = " << fixed;
	cout << setprecision(2) << Area(Length,Widht);
	cout << endl;
	}
	else if (Choice == '3'){
	float base;
	double height;
	cout << "input base and height : ";
	cin >> base>>height;
	cout << "Area of Triangle = " << fixed;
	cout << setprecision(2) << Area(base,height) << endl;
	}
	else if (Choice == '4'){
	float a,b;
	double height;
	cout << "input length base1 and base2 and height: ";
	cin >> a>>b;
	cout << "Input height : ";
	cin >> height;
	cout << "Area of Trapzoid = " << fixed;
	cout << setprecision(2) << Area(a,b,height) << endl;
	}
	else if (Choice == '5') Flag = false;
	else {
	cout << "\nYou choose out of range is ";
	cout << "not process.\n";
	}
	} while (Flag);
	cout << "\n . . . Exit Program . . .\n";
	return(0);
	}
	float Area( float Radius)
	{
	return(3.14159F * Radius * Radius);
	}
	float Area( float Length,  float Widht)
	{
	return(Length * Widht);
	}
	float Area( float base , double height)
	{
	return(0.5*base*height);
	}
	float Area( float a , float  b , double height)
	{
	return 0.5*height*(a+b);
	}
	void DisplayMenu()
	{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout << " 1. Clrcle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Triangle" << endl;
	cout << " 4. Trapzoid" << endl;
	cout << " 5. Exit" << endl;
	cout << "Enter your choose number: ";
	}
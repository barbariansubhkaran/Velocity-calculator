#include <iostream>

using namespace std;

int main()
{
 
double Re, viscosity, length, velocity;

cout << "Enter the value of Reynolds number : " << endl;
cin >> Re;

cout << "Enter the value of viscosity : " << endl;
cin >> viscosity;

cout << "Enter the value of length : "  << endl;
cin >> length;

 velocity = Re * (viscosity/length);

 cout <<"Velocity : " <<  velocity << endl;

   return 0;
}

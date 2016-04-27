#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float weight,radius,force;
	cout << "Enter the weight: " << endl;
	cin >> weight;
	cout << "Enter the radius: " << endl;
	cin >> radius;
	force = (4.0/3.0 * M_PI*pow(radius,3.0)) * 62.4;
	cout <<  force << endl;
	if(force >= weight)
	cout << "your sphere will float" << endl;
	else if (force < weight)
	cout << "your sphere will sink" << endl;
}


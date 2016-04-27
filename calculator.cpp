#include <iostream>
#include <math.h>
using namespace std;

int main() {
	string operation;
	float num1;
	float num2;
	float num3;
	cout << "enter operation here(+,-,*,/,^,%)" << endl;
	cin >> operation;
	cout << "enter first number: " << endl;
	cin >> num1;
	cout << "enter second number here: " << endl;
	cin >> num2;

	if(operation.compare("+") == 0)
	num3 = num2 + num1;
	if(operation.compare("-") == 0)
	num3 = num1 - num2;
	if(operation.compare("*") == 0)
	num3 = num1*num2;
	if (operation.compare("/") == 0)
	num3 = num1/num2;
	if (operation.compare("^") == 0)
	num3 = pow(num1,num2);
	if (operation.compare("%") == 0)
	num3 = fmod(num1,num2);

	cout << num3 << endl;
	int again = 0;
	cout << "do you want to continue?(0 = no, 1 = yes)" << endl;
	cin >> again;
	if(again == 1)
	main();
	else if (again == 0)
	cout << "thank you for using my calculator!" << endl;
	else
	cout << "please enter a valid input" << endl;
	return 0;
}

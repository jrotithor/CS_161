#include <iostream>
#include <string>
using namespace std;
int main(){
	string message;
	cout << "Enter a message here: " << endl;
	cin >> message;
	int blah = message.length();
	for(int i = 0; i < message.length(); i++)
		cout << message.at(i)<< endl;
	getline(cin,message);
	for(int i = 0; i < message.length(); i++)
		cout << message.at(i)<< endl;
	blah += message.length();
	cout << "number of characters: " << blah << endl;	
	return 0;
}

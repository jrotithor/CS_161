/*
 *Program name: ascii2.cpp
 *Author: Jaydeep Rotithor
 *Date: 1/22/2015
 *Description: takes in a string input from the user and converts it into a string of binary numbers. Also takes a binary input and converts it to a strig of ascii characters.
 *Input: a string, a string of binary numbers
 *Output: string of binary numbers, a string.
 */
#include <iostream>
#include <string>
#include <bitset>
#include <cmath>
using namespace std;
/*
 *Function- Main.
 *Description- Takes in a string of numbers and converts it into a string of binary numbers. Then, takes in a string of binary numbera and converts it to a string of characters.
 *Parameters- ascii_words, binaryint.
 *Pre-conditions-User must enter only characters in ascii_words and only 0s and 1s in binaryint.
 *Post-conditions- The program will accurately output a corresponding string of binary numbers to ascii_words and a string of characters corresponding to binaryint.
 */

int main(){
	string ascii_words;
	string binaryint;
	int decimal = 0;
	cout << "Enter a string here: " << endl; //prompt user for string//
	cin >> ascii_words; //user enters string here//
	for(int i = 0;i < ascii_words.length();i++)
		cout << bitset<16> ((int)ascii_words[i])<< endl;   //converts ascii to binary.//
	cout << "Enter a string of numbers in binary(every input must be either 0 or 1): " << endl;
	cin >> binaryint; //the user enters a number in binary//
	
	for(int i = 0;i < binaryint.length(); i++){
		while(binaryint.at(i) != '1' && binaryint.at(i) != '0'){
			cout << "this is an invalid input. please enter 1s and 0s: " << endl;
			cin >> binaryint;
		}
	if(binaryint.at(i) == '1')
		decimal += pow(2,binaryint.length()-(i+1));
	}
	cout << (char)decimal << endl;
	return 0;
}


/*
 *Program: limits.cpp
 *Author: Jaydeep Rotithor
 *Date: 1/11/2015
 *Description: Prints the maximum and minimum signed and unsigned values for int, short, and long, and also prints out the ascii values for a character input in decimal, binary, and hexaecimal.
*Input: a character
 *Output: The minimum and maximum values(signed and unsigned) for the data types short, long, and int, and the ascii values for a given character in decimal, binary and hexadecimal along with the character.
 */


#include <iostream>
#include <climits>
#include <cmath>
#include <cstring>
#include <bitset>
using namespace std;
int main(){
int minimum = INT_MIN;
int maximum = INT_MAX;
int unsigned_maximum =  UINT_MAX;
short minimum_shrt = SHRT_MIN;
short maximum_shrt = SHRT_MAX;
short unsigned_maximum_shrt = USHRT_MAX;
long minimum_lng = LONG_MIN;
long maximum_lng = LONG_MAX;
long maximum_unsigned_long = ULONG_MAX;


	cout << minimum << endl;
	cout << (minimum + 1) << endl;
	cout << (int)pow(2,sizeof(int)*8)*-1 << endl;
	cout << maximum << endl;
	cout << (maximum + 1) << endl;
	cout << (int)pow(2,sizeof(int)*8)-1 << endl;
	cout <<  UINT_MAX << endl;
	cout << (UINT_MAX + 1) << endl;
	cout << (unsigned int)pow(2,sizeof(unsigned int)*8)-1 << endl;
	cout <<  SHRT_MIN << endl;
	cout <<  SHRT_MIN + 1 << endl;
	cout <<  pow(2,sizeof(short)*7.5)*-1 << endl;
	cout <<  SHRT_MAX << endl;
	cout <<  short(SHRT_MAX + 1) << endl;
	cout <<  pow(2,sizeof(short)*7.5)-1 << endl;
	cout <<  USHRT_MAX << endl;
	cout <<  (unsigned short)(USHRT_MAX + 1) << endl;
	cout <<  pow(2,sizeof(unsigned short)*8)-1 << endl;
	cout <<  minimum_lng << endl;
	cout << (minimum_lng + 1) << endl;
	cout << (long)pow(2,sizeof(long)*8)*-1 << endl;
	cout << maximum_lng << endl;
	cout << (maximum_lng + 1) << endl;
	cout << (long)pow(2,sizeof(long)*8)-1 << endl;
	cout <<  ULONG_MAX << endl;
	cout << (ULONG_MAX + 1) << endl;
	cout << (unsigned long)(pow(2,sizeof(unsigned long)*8))-1 << endl;

	
	char ascii_character;
	cout << "enter a character here" << endl;
	cin >> ascii_character; 
	cout << ascii_character << endl; 
	cout << (int)ascii_character << endl;

	cout << bitset<16>((int)ascii_character) << endl;
	cout << hex << ((int)ascii_character) << endl;
}

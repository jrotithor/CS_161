/*
 *Program filename: a4.cpp
 *Author: Jaydeep Rotithor
 *Description: Converts a string of characters to a string of binary characters, and converts a string of binary numbers to a string of characters
 *Input: a string of characters and a string of binary numbers
 *Output: a string of binary numbers and a string of characters.
 */
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <stdlib.h>
using namespace std;
/*
 *Function: get_user_string_input 
 *Description: gets a string from the user.
 *Parameters:none.
 *Pre-conditions- the user should be able to enter an input
 *Post-conditions- the program will return the string entered by the user.
 *
 */
string get_user_string_input(){
   string inputstring;
   cout << "Enter a string here: " << endl;
   getline(cin, inputstring);  //user inputs a string
   return inputstring;
}

/*
 *Function: get_user_binary_input 
 *Description: gets an binary from the user.
 *Parameters:none.
 *Pre-conditions- the user should be able to enter an input
 *Post-conditions- the program will return the string entered by the user.
 */
string get_user_binary_input(){
   string inputint;
   cout << "Enter a binary number here(consists of 0s and 1s): " << endl;
   cin >> inputint; //user enters a binary string
   return inputint;
}

/*
 *Function: check_user_input 
 *Description: checks to see if the user's input is in bytes
 *Parameters: a string
 *Pre-conditions- the user has already entered a string.
 *Post-conditions- the program will return the string if it is valid and error messages if it is not.
 */
string check_user_input(string s){
   string a;
   string g = s;
   while(s.length()%8 != 0){
      cout << "Sorry, but your binary message must be in bytes(you need a multiple of 8 numbers). " << endl;  //throws error if not in bytes
      s.clear();
      cout << s << endl;
      s = get_user_binary_input(); //reprompts user
      a = s;
   }
   if(s == g)
      return s;
return a;
}
/*
 *Function: check_user_binary_input 
 *Description: checks to see if the user's input is in binary
 *Parameters: a string
 *Pre-conditions- the user has already entered a string.
 *Post-conditions- the program will return the string if it is valid and error messages if it is not.
 */
string check_user_binary_input(string s){
   string a;
   string g = s;
   for(int i = 0; i < s.length(); i++){  
      while(s.at(i) != '1' && s.at(i) != '0'){
	 cout << "Sorry, but you have to enter only 1s and 0s, since this is binary. "<< endl;
	 s.clear();
	 i = 0;
	 s = get_user_binary_input(); //reprompts user
	 a = s;
      }
   }
	if(s == g)
	   return s;
return a;
}

/*
 *Function: bin_to_dec
 *Description: converts a binary number to a decimal and then an ascii character
 *Parameters:string
 *Pre-conditions- the user should have entered an input and it has been checked to see if it is valid
 *Post-conditions- the program will return the string corresponding to the binary number originally entered.
 */
void bin_to_dec(string s){
   int values [s.length()/8];
   int a = 0; 
   int dec_output = 0;
   char x;
   for(int i = 0; i < s.length(); i += 8){
      for(int j = 0;j < 8;j++){
	 if(s.at(j+i) == '1')
	    dec_output += pow(2, 8 - (j+1));  

	 while(dec_output > 127){
	    cout << "the entered ascii value is too high. try again." << endl;
	    cout << dec_output;
	    dec_output = 0;
	    s = get_user_binary_input();
	 }
      }
      values[a] = dec_output;
      a++;
      dec_output = 0;
   }
   
   for(int i = 0; i < s.length()/8;i++){
      x = values[i];
      cout << x;
   }
   cout << "\n";
}

/*
 *Function: get_user_string_input 
 *Description: gets a string from the user.
 *Parameters:none.
 *Pre-conditions- the user should be able to enter an input
 *Post-conditions- the program will return the string entered by the user.
 */
void dec_to_bin(string c){
   int stringarray[c.length()];
   for(int i = 0; i < c.length();i++)
      stringarray[i] = c.at(i);
   string s; 
   s.resize(c.length() * 8);
   int k = 0;
   for(int i = 0; i < c.length();i++){
      int j = 7;
      while(j >= 0){
	 if(stringarray[i] - pow(2,j) >= 0){
	    s.at(k) = '1';
	    stringarray[i] -= pow(2,j);
	 }
	 else
	    s.at(k) = '0'; 
	 j--;
	 k++;   

      }
   }
   cout << s << endl;


}
/*
 *Function: main
 *Description: executes all of the functions
 *Parameters:a string
 *Pre-conditions- all of the functions that go into main all work properly.
 *Post-conditions- the program will properly execute all of the functions that are called in main.
 */
int  main(int argc, char *argv[]){
   //string s = get_user_string_input();
   if(argc != 5){
      cout << "you need 5 inputs here" << endl;
      exit(0);
   }
   if(argv[1][0] == *"-" && argv[1][1] ==  *"b" && argv[1][2] == *"\0"){
   string a = check_user_input(argv[2]);
   a = check_user_binary_input(a);
      bin_to_dec(a);
   }
   else if(argv[1][0] == *"-" && argv[1][1] == *"a" && argv[1][2] == *"\0"){
      dec_to_bin(argv[2]);
   }
   else{
      cout << "please enter -a or -b only." << endl;
      exit(0);
   }
   if(argv[3][0] == *"-" && argv[3][1] == *"b" && argv[3][2] == *"\0"){
      
   string b = check_user_input(argv[4]);
   b = check_user_binary_input(b);
      bin_to_dec(b);
   }
   else if(argv[3][0] == *"-" && argv[3][1] == *"a" && argv[3][2] == *"\0"){
      dec_to_bin(argv[4]);
   }
   else{
      cout << "please enter -a or -b only. " << endl;
      exit(0);
   }
   return 0;
}





#include <iostream>

#define PROMPT "Please enter a whole number: "
#define NOT_PRIME "the number is not a prime number.\n"
#define PRIME "The number is a prime number. \n"
#define DONE 0    //ends successful program//
#define FIRST_FACTOR 3 //initial valoe in for loop//
using namespace std;
int main(){
   int i; //loop counter//
   int number; //number provided by user//
   cout << PROMPT; // prompt user// 
   cin >> number; // wait for user input//
   /*Prime numbers are numbers greater than one that are inly divisible by 1 and themselves. dividing the number by 2 shortens the time it takes to complete.*/
   for(i = FIRST_FACTOR; i < number/2; i++)
      if(number%i == 0){      //if divisible//
	   cout << NOT_PRIME << number << endl; //not prime//
	   return DONE; // exit//
	 }
   //if not divisible by anything, it is prime.//
   cout << PRIME << number << endl; // prime//
   return 0; //exit program//
} 

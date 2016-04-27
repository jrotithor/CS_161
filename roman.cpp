#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


string getinputs(){
   string input;
   cout << "Enter a roman numeral here: " << endl;
   cin >> input;
   return input;
}
void converter(string input, int *numbers){
   for(int i = 0;i < input.length();i++){
      if(input.at(i) == 'I')  numbers[i] = 1;
      else if(input.at(i) == 'V') numbers[i] = 5;
      else if(input.at(i) == 'X') numbers[i] = 10;
      else if(input.at(i)== 'L') numbers[i] = 50;
      else if(input.at(i) == 'C') numbers[i] = 100;
      else if(input.at(i) == 'D') numbers[i] = 500;
      else if(input.at(i) == 'M') numbers[i] = 1000;
      else{
	 cout << "not a valid roman numeral" << endl;
	 exit(0);
      }
   }
}
void romancalculator(string input,int *numbers){
   int total = 0;
   int highest = 0;
   for(int i = input.length() -1; i >= 0 ; i--)
      if(numbers[i] > highest){
	 highest = numbers[i];
	 total += highest;
      }
      else if(numbers[i] == highest)
	 total += highest;
      else
	 total -= numbers[i];
   cout << total << endl;
}
int input2(){
   int decimal;
   cout << "Enter a decimal here"  << endl;
   cin >> decimal;
   return decimal;
}
string converter2(int decimal){
   string s;
   s.resize(10);
   
     while (decimal > 0){
	 if(decimal - 1000 >= 0){ 
	    s += 'M';
	    decimal -= 1000;
	 }
	 else if(decimal - 500 >= 0){
	    if(decimal >= 900){
		decimal -= 900;
	    s += "CM";
	    }
	    else{
	    s += 'D';
	    decimal -= 500;
	    }
	 }
	 else if(decimal -100 >= 0){
	    if(decimal >=400){
		  decimal-= 400;
		  s += "CD";
	    }
		  else{
	    s += 'C';
	    decimal -= 100;
	 }
	 }
	 else if(decimal - 50 >= 0){
	   if(decimal >= 90){
	    decimal -= 90;
	     s += "XC";
	   }
		else{
		   s += 'L';
	    decimal -= 50;
	 }
	 }
	 else if(decimal - 10 >= 0){
	    if(decimal >= 40){
	       decimal -= 40;
	       s += "XL";
	    }
	       else{  
	    s += 'X';
	    decimal -= 10;
	 }
	 }
	 else if(decimal - 5 >= 0){
	    if(decimal == 9){
	       decimal -= 9;
	      s += "IX";
	    }
	    else{
	    s += 'V';
	    decimal -= 5;
	 }
	 }
	 else
	    while(decimal > 0){
	       if(decimal == 4){
		  s += "IV";
		  decimal -= 4;
	       }
		  else{
	       int j = 0;
	       s += 'I';
	       j++;
	       decimal--;
		  }

	    }
      }
      cout << s << endl;
      return s;
   }




int main(){ 
   string s = getinputs();
   int numbers[s.length()];
   converter(s,numbers); 
   romancalculator(s,numbers);
   int a = input2();
   converter2(a);

}

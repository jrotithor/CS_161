#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
   string c;
   cin >> c;
   int anarray[c.length()];
    for(int i = 0; i < c.length();i++)
       anarray[i] = c.at(i);
   string s;
   s.resize(c.length() * 8);
   int k = 0;
   for(int i = 0; i < c.length(); i++){
   int j = 7;
   while(anarray[i] > 0) {
      if(anarray[i] - pow(2,j) >=0){
	 s.at(k) = '1';
	 anarray[i] -= pow(2,j);
      }

      else
	 s.at(i) = '0';
      k++;
      j--;
   }
   cout << s << endl;
   return 0;
}
}

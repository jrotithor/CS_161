#include<iostream>
using namespace std;
const int COLS = 3;
void print(int b[][COLS],  int disks){
	for(int i = 0; i < disks; i++){
	   for(int j = 0; j < COLS; j++)
	      cout <<" " <<  b[disks - i - 1][j];
	   cout << endl;
	}
	cout << endl;
}


int countdisks(int b[][COLS], int col){

int i = 0;
while (b[i][col] != 0)i++;
return i;
	

}
void towers(int disks, int b[][COLS], int from_col, int to_col, int spare, int totaldisks){
  
   if (disks == 1){
     int srcheight = countdisks(b,from_col)-1;
	int destheight = countdisks(b, to_col);
	b[destheight][to_col] = b[srcheight][from_col];
	b[srcheight][from_col] = 0;

   }
      else{
      towers(disks - 1, b, from_col, spare, to_col, totaldisks);
      towers(1, b, from_col, to_col, spare, totaldisks);
      towers(disks - 1, b, spare, to_col, from_col, totaldisks);
	
      }
      print(b, totaldisks);
   }


int main(int argc, char *argv[]){
  
   int disks;
   cout << "Enter the number of disks" << endl;
   cin >> disks;
   int b[disks + 1][COLS];
   for(int i = 0; i < disks; i++){
	b[i][0] = disks - i;

	b[i][1] = 0;
	b[i][2] = 0;
   }
b[disks][0] = 0;
b[disks][1] = 0;
b[disks][2] = 0;
   print(b, disks);
   towers(disks,  b, 0,2,1, disks);
   print(b, disks);

}
  


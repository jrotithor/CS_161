#include <iostream>
using namespace std;

int main(){
float cereal_weight;
int lifespan;
int weekly_cereal_boxes;
float cereal_tonnage;
cout << "enter the weight (in ounces) of a cereal box:" << endl;
cin >> cereal_weight;
cout <<"enter your expected lifespan:" << endl;
cin >> lifespan;
cout << "enter the number of cereal boxes that you eat per week:" << endl;
cin >> weekly_cereal_boxes;
int annual_cereal_boxes = weekly_cereal_boxes * 52;   //52 weeks in a year// 
cereal_tonnage =  (cereal_weight / 35273.92)* annual_cereal_boxes * lifespan;
float ton_of_cereal = ((cereal_weight * annual_cereal_boxes * lifespan)/cereal_tonnage)/cereal_weight;
int total_boxes = weekly_cereal_boxes * 52 * lifespan;
cout << "you will eat "; 
cout << cereal_tonnage;
cout << " tons of cereal in your lifetime. " << endl;
cout << "you need ";
cout << ton_of_cereal;
cout <<" boxes of cereal to get one ton of cereal." << endl;
cout << "you will eat ";
cout << total_boxes;
cout << " in your lifetime." << endl;
return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
#define WATER_WEIGHT 62.4;
int main(){
   //variables needed to calculate buoyancy//
   float weight,radius, bforce, volume;
   // Prompt user for weight and radius of sphere//
   cout << "please enter the weight(lbs): ";
   cin >> weight;
   //calculate the volume and buoyancy force//
   cout << "please enter the radius: ";
   cin >> radius;
   volume = 4.0/3.0 * M_PI *pow(radius,3);
   bforce = volume * WATER_WEIGHT;

   //determine if the sphere wil sink or float//
   if(bforce >= weight) 
      cout << "the sphere whii float!\n";
      else
	 cout << "the sphere will sink!\n";
   return 0;
}

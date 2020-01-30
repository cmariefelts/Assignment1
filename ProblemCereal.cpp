#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  //Metric ton = 35273.92 ounces
  float cerealOunces = 0.0;
  //Get user input for the cereal ounces
  cout << "Enter the weight of cereal in ounces: " << endl;
  cin >> cerealOunces;
  //Getting the tons of cereal we have
  float cerealTons = cerealOunces / 35273.92;
  cout << "The weight in metric tons of the cereal is " << cerealTons << " tons." << endl;
  //Getting the boxes we need
  float boxesNeed = 35273.92 / cerealOunces;
  //Use math.h to round up on the boxes we need
  cout << "The boxes we need for one metric ton of cereal is " << ceil(boxesNeed) << " boxes." << endl;

  return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Define our variables
  float itemCost = 0;
  float yearsFromNow = 0;
  float inflateRate = 0;
  float estimatedCost = 0;

  //Get input from the user
  cout << "What is the cost of the item?: " << endl;
  cin >> itemCost;
  cout << "How many years from now will the item be purchased?: " << endl;
  cin >> yearsFromNow;
  cout << "What is the inflation rate?: " << endl;
  cin >> inflateRate;

  //Turn the percent into a decimal
  inflateRate = inflateRate / 100;

  //Looping through the number of years from now that they will purchase the item
  for (int j = 1; j < yearsFromNow; ++j)
  {
    itemCost += itemCost * inflateRate;
  }

  //Rounding up or down on cents
  cout << setprecision(2) << fixed;

  //Output/print to screen for user the expected cost of item
  cout << "The expected cost of this item in " << yearsFromNow << " years is $" << itemCost << endl;


  return 0;
}

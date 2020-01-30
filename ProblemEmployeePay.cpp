#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Define all variables
  const float ratePerHour = 16.00; //The normal rate of pay for regular hours
  const float overTimeHourRate = ratePerHour * 2.00; //Pay for overtime hours is the normal rate * 2
  float regEmployeeRate;
  float hours; //hours they worked
  float takeHomePay; //Net pay
  float fedTaxWithhold;
  float socTaxWithhold;
  float stateTaxWithhold;
  float grossPay; //Pay without including the withheld taxes/amounts
  int medicalInsur = 10;

  //Getting user input for hours worked in the week
  cout << "How many hours were worked in a week? " << endl;
  cin >> hours;

  //Finding out if the employee worked overtime hours or just regular hours
  if (hours <= 40)
  {
      //If they worked a regular week, we just multiply hours by the rate of pay
      grossPay = hours * ratePerHour;
  }
  else { //If they work overtime hours, for those extra hours pay them overtime rate
    int hoursOvertime = hours - 40;
    grossPay = (hours * ratePerHour) + (hoursOvertime * overTimeHourRate);
  }

  //Figuring out the amounts taken for each tax withholding
  regEmployeeRate = 16.00 * hours;
  socTaxWithhold = regEmployeeRate * 0.06;
  fedTaxWithhold = regEmployeeRate * 0.14;
  stateTaxWithhold = regEmployeeRate * 0.05;
  takeHomePay = regEmployeeRate - socTaxWithhold - fedTaxWithhold - stateTaxWithhold - medicalInsur;

  //Round up or down on cents
  cout << setprecision(2) << fixed;

  //Print/output to screen all of the values
  cout << "The gross pay is: $" << grossPay << endl;
  cout << "The Social Security Tax Withholding Amount is: $" << socTaxWithhold << endl;
  cout << "The Federal Tax Withholding Amount is: $" << fedTaxWithhold << endl;
  cout << "The State Tax Withholding Amount is: $" << stateTaxWithhold << endl;
  cout << "The Medical Insurance Withholding Amount is: $" << medicalInsur << endl;
  cout << "The final take home pay is: $" << takeHomePay << endl;


  return 0;

}

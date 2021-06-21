#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

const float tax_rate = 0.04;
int main()
{
  //declare variable 
  string name;
  float price = 4.50;
  int qty = 0;
  float charge = 0, taxcharge = 0;

  //get input from user
   cout << " Enter the number you wish to order: \n";
   cin >> qty;

   //format output
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);

   //calculations
   charge =qty * price;
   taxcharge = charge * tax_rate;
   cout << " the tax charge is: $" << setprecision(2) << taxcharge <<endl;
   charge = charge + taxcharge;

   //format output
   cout << " your total charge: $" << setprecision(2) << charge <<endl;

   return 0;
  
}
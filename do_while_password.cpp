#include<iostream>
using namespace std;

int main()
{
   string password = "1234";
   string userpassword;

   do
   {
      cout << "Enter your password: \n";
      cin >> userpassword ;

   } while(userpassword != password);

   return 0;
         
}

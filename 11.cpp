#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
  int num1,num2,sum;
  //cout << "Enter 2 numbers:\n"; 
  //cin >> num1 >> num2;

  sum = 0;
  do{
   //cout << "Enter 2 numbers:\n"; 
   //cin >> num1 >> num2;

   sum = sum + num1;
   cout << num1++ <<endl;

  }while (num1<=num2);
  cout <<"Sum\n" << sum;
}
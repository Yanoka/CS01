#include <iostream>
using namespace std;

int findmin(int, int, int);
int main()
{

	int num1, num2, num3;
	int min;
	num1 = 10;
	num2 = 5;
	num3 = 15;
	
	min = findmin(num1,  num2, num3);
	cout << " Min is " << min << endl;
	
}

int findmin(int n1, int n2 ,int n3)
{
    int min; 
    if (n1<n2)
      min=n1;
    else
      min=n2;

    if (n3<min)
      min=n3;
        
    return min;
}
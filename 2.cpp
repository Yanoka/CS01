#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
	int num, sum;
	int i;
	
	sum = 0;
	i = 0; 

	while( i<10 )
	{
	
    sum += i++; // i += 1;
   

	}
	cout << "sum " << sum << endl;

}
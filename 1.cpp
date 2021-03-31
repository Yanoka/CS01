
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
	int num, sum;
	int i;
	srand(time(0));
	sum = 0;
	i = 0; 
	while( i<10 )
	{
		num = rand() % 100;
		if ( num % 2 == 0){
			sum = sum + num;
			cout << num << " is even " << endl;
		}
		else
			cout << num << " is odd " << endl;
		i += 1;
	}
	cout << "sum " << sum << endl;

}


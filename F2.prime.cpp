#include <iostream>
using namespace std;
bool inputvalidate(int,int);
void getlistprime(int,int);

bool inputvalidate(int num1,int num2)
{
//#include <iostream>
//using namespace std;
//bool inputvalidate(int num1, int num2)
//{
  if (num1 < num2)
    return true;
  else
    return false;
//}
}

void getlistprime(int begin,int end)
{

}
int main()
{
  int begin,end,i,j;
  



  do{
    cout << "Please,enter two integers from 1 to 100 " << endl;
    cin >> begin >> end; 
  }
  while(begin > end);

  for (i=begin; i<end; i++){
    // for(j=2; j<i;j++){
    // for(j=2; j< i/2 ;j++){
    for(j=2; j<= (i/j) ;j++){ //j<=i/j
      if(i%j==0)
        break;
    
    }
    if (i==j)
     cout << i << " is prime number" <<endl;
  }
}
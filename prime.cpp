#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int base,  result, number, root,a;
  int i;
  double exponent;
	
	cout<<"enter a number ";
  cin>>number;
  base=number;
	exponent = 0.5;
	result = pow(base, exponent);
	
	for(i=2;i<number;i++)
  {
    a=result%i;
    if(a==0)
    {
      cout<<"number is not prime";
      break;
    }


  }
	
	return 0;
}

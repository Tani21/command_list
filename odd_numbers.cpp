#include<iostream>
using namespace std;

int main(void)
{
  int number,i;
  cout<<"enter number";
  cin>>number;

  for(i=number;i>1;i--)
  {
    if(i%2!=0)
    cout<<" "<<i;
  }
 return 0;
}

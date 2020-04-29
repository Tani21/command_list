#include<iostream>
using namespace std;

int main(void)
{
  int length, breadth, area, perimeter;
  cout<<"enter length and breadth "<<endl;
  cin>>length>>breadth;
  area=length*breadth;
  perimeter=2*(length+breadth);

  if(area>perimeter)
  {
  cout<<"area is greater than perimeter"<<endl;
  cout<<"area="<<area<<endl;
  cout<<"perimeter="<<perimeter<<endl;
  }

  if(area==perimeter)
  {
  cout<<"area is equal to perimeter"<<endl;
  cout<<"area="<<area<<endl;
  cout<<"perimeter="<<perimeter<<endl;
  }

  if(area<perimeter)
  {
  cout<<"area is less than perimeter"<<endl;
  cout<<"area="<<area<<endl;
  cout<<"perimeter="<<perimeter<<endl;
  }

  return 0;
}

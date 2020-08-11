#include <iostream>
using namespace std;

int day_of_the_week(int y,int m,int d)
{
  int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
  if(m<3)
    y = y-1;
  return ((y+y/4-y/100+y/400+t[m-1]+d)%7);
}

int main()
{
  cout<<day_of_the_week(2017,7,13);
  return 0;
}
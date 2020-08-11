

#include<iostream>
using namespace std;


int main()
{
  int arr[] = {1,6,3,4,8};
  int inv = 0;
  for(int i=0; i< 5;i++)
  {
    for(int j=i+1; j < 5;j++)
    {
      if(arr[i] > arr[j])
         inv++;
    }

  }
      cout<< inv;
  return 0;
}
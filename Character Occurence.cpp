// Number of occurrence of particular character in string

#include <iostream>
using namespace std;

int main() 
{
  string text = "asdafghewreerterwiu";
  char character = 'e';
  int count =0;

  for(int i=0;i<text.size();i++)
  {
    if(text[i] == character)
      count++;    
  }  
  cout<<count<<endl;
    return 0;
}
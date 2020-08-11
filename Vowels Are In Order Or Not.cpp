//Number of vowels in string and whether they are in alphabetical order or not

#include <iostream>
using namespace std;

int main() 
{
  string text = "asdafgheiu";
  int count =0;
  int last;
  int not_Od =1;
  for(int i=0;i<text.size();i++)
  {
    if(text[i] == 'a'  || text[i] == 'e'|| text[i] == 'i'|| text[i] == 'o'|| text[i] == 'u')
    {  
      count++;
      if(text[i] >= text[last])
        last = i;
      else 
        not_Od = -1;
    }
  }  
  cout<<count<<endl;
  if(not_Od != -1)
    cout<<"In order";
  else 
    cout<<"Not in order";

    return 0;
}
//  In a given String return the most frequent vowel coming.
#include<iostream>
using namespace std;

class letter
{
  public:
  char l;
  int times=0;
};

int main() 
{
  letter lt[5];
  lt[0].l = 'a';
  lt[1].l = 'e';
  lt[2].l = 'i';
  lt[3].l = 'o';
  lt[4].l = 'u';

  string text = "eguduiEsAefUfu";

  for(int i=0;i<text.size();i++)
  {
         if(text[i]=='a' or text[i]=='A') lt[0].times++;
    else if(text[i]=='e' or text[i]=='E') lt[1].times++;
    else if(text[i]=='i' or text[i]=='I') lt[2].times++;
    else if(text[i]=='o' or text[i]=='O') lt[3].times++;
    else if(text[i]=='u' or text[i]=='U') lt[4].times++;
    else continue;
  }

  int max = 0;
  for(int i=0;i<5;i++)
  {
    if(lt[max].times<lt[i].times)
    {
      max = i;
    }
  }

  cout<<lt[max].l;

 return 0;
}
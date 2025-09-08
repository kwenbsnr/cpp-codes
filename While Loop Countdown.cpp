// custom countdown using while
#include <iostream>
using namespace std;

int main ()
{
  int n;
  
  cout <<"Enter a number: ";
  cin>> n;

  while (n>0) {
    cout << n << ", ";
    --n;
  }

  cout << "Happy new year!\n";
}

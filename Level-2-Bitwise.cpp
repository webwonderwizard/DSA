#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int b = 10;
  int c = 5;
  int d = 5;

  cout << (a & b) << endl;
  cout << (a | b) << endl;
  cout << (c ^ d) << endl;

  // Left Shift Operator
  int e = 7;
  cout << (e << 1) << endl;

  // Right Shift Operator
  int num = 5;
  cout << (num >> 1) << endl;

  // Right Operator Shift unsigned case
  int v = -100;
  cout << (v >> 1) << endl; // works fine

  unsigned int o = -100;
  cout << (o >> 1) << endl; // +ve large number

  // * Garbage Value
  // when we left shift a number by negative value, we get garbage value
  int x = 10;
  cout << (x << -1) << endl;

  /*
  PRE/POST Increment/Decrement Operators

     ++a -> Pehle increment karo, phr use karo
     a++ -> Pehle use karo, phr increment karo
     --a -> Pehle decrement karo, phr use karo
     a-- -> Pehle use karo, phr decrement karo
  */

 int aa = 21;
 cout << ++aa << endl;

 cout << aa++ << endl;

 cout << aa << endl;

 int s = 10;
 cout << ((++s) * (s++)) << endl;

 


}

#include <bits/stdc++.h>
using namespace std;

/*
THIS PRESEDENCE IS FOLLOWED BY C++
(Calculations happens in higher precedence)
double > float > long long int > long int > int > char

-10^9 < int < 10^9
-10^12 < long int < 10^12
-10^18 < long long int < 10^18

if storage data is not sufficient to store the value, it gives
OVERFLOW it creates a full cycle and it goes back to 1
*/

int main() {
  
  //prints 1 only since the value given to it is an integer
  double a = 3/2;
  cout << a << endl;

  //max value of int
  int mx = INT_MAX;
  cout << mx << endl;

  int aa = 100000;
  int bb = 100000;

  //gives WRONG result
  //cause the operation is performed in int then stored in long int
  long long int c = aa * bb;

  //RIGHT result
  // 1LL sets it to long long int
  long long int d = aa * 1LL * bb;
  cout << d << endl;

  double cc = (double)aa * bb;

  //fixed: no scientific notation
  //setprecisioin: sets no. of digits after decimal
  cout << fixed << setprecision(0) << cc << endl;

  //1e24 = 10^24;
  double dd = 1e24;
}
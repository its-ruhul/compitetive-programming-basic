#include<bits/stdc++.h>
using namespace std;

int main() {
  /*
    && ||

  {} creates a scope
   global variables can be used anywhere
  */

  {
    int x;    //here x has scope inside this curly brackets
  }

  bool condition = true;

  while(condition) {
    condition = false;
  }

  int n;
  cin >> n;
  for (int i = 1; i<= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      cout << "*";
    }
    cout << endl;
  }
  // above statement can also be written as
  for(int i = 1; i <= 10; cout << i++ << endl){

  }

  //use while loops for test cases
  /*
  while (t--) {
    runs until t = 0
  } 
  */

  //break : breaks the immediate loop
  //continue: skips the ongoing iteration of the loop
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;

  if (a % 2 != 0) {
    cout << 0;
    return 0;
  }
  
  if (a % 4 == 0){
    cout << ( a / 4) - 1;
  }
  else {
    cout << a / 4;
  }
}
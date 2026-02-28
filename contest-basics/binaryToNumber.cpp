#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  int n;
  int unit;
  string binary;

  for(int i = 0; i < t ; ++i) {

    long long decimal = 0;
    cin >> n;
    cin >> binary;
    for (int j = 0; j < n; j++) {
      int a = binary[j] - '0';

      //Integer Arithematic: Horner's Method
      decimal = decimal * 2 + a;
    }
    cout << decimal << endl;
  }
}